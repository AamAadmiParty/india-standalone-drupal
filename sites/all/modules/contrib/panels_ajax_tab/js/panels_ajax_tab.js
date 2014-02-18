(function($) {
  Drupal.behaviors.panels_ajax_tabs = {
    attach: function(context) {
        $('.panels-ajax-tab-tab:not(.panels-ajax-tabs-processed)', context).once('panels-ajax-tabs-once', function() {  
            
            //We need ot push the state when the page first loads, so we know what the first tab is
            if ($(this).parent().hasClass('active')) {
              window.history.replaceState({'tab':$(this).data('panel-name')}, $(this).html(), $(this).attr('href'));
            }
            
            $(this).click(function(e) {
              e.preventDefault();
              // Push the history
              // @@TODO: Deal with crappy browsers and fall back to using a #anchor
              if (typeof window.history.pushState != 'undefined') {
                window.history.pushState({'tab':$(this).data('panel-name')}, $(this).html(), $(this).attr('href'));
              }
              
              if (!$(this).parent().hasClass('active')) {
                $(this).panels_ajax_tabs_trigger();
              }
              
            })
            .css('cursor', 'pointer')
            .addClass('panels-ajax-tabs-processed');
  
        // Trigger a click event on the first tab to load it
        $('.pane-panels-ajax-tab-tabs', context).each(function() {
          var tabs = $('.panels-ajax-tab-tab:not(.panels-ajax-tabs-first-loaded)', this);
          var firstTab = tabs.first();
          var target_id = firstTab.data('target-id');
          var preloaded = $('#panels-ajax-tab-container-' + target_id).data('panels-ajax-tab-preloaded');
          var currentTab;
          
          if (preloaded === '') {
            currentTab = firstTab;
            firstTab.trigger('click');
          }
          else {
            currentTab = tabs.filter('*[data-panel-name="' + preloaded + '"]');
            // Prime the cache from the preloaded content
            currentTab.data('panels-ajax-tab-cache', $('#panels-ajax-tab-container-' + target_id).html());
          }
          
          currentTab.addClass('panels-ajax-tabs-first-loaded');
          currentTab.parent().addClass('active');
        });  
      });
    }
  };
  

  window.onpopstate = function(e) {
    if(e.state != null){
      $('a[data-panel-name="'+e.state.tab+'"]').panels_ajax_tabs_trigger();
    }
  };
  
})(jQuery);


/**
 * Panels-ajax-tabs-trigger is a jquery plugin that can be triggered.
 * A callback, to be called after content has been loaded, can optionally be passed
 */
(function($){
  $.fn.extend({
    panels_ajax_tabs_trigger: function(callback) {
      return this.each(function() {
        var $tab = $(this);
        var container = $tab.parents('.panels-ajax-tab:first');
        
        // If it's already in the process of loading, dont do anything
        if ($(container).data('loading') === true)
          return true;
        $(container).data('loading', true);

        var target_id = $tab.data('target-id');
        var panel_name = $tab.data('panel-name');
        var entity_context = $tab.data('entity-context');
            
        // If we have it cached we don't need to do AJAX
        if (typeof $tab.data('panels-ajax-tab-cache') !== "undefined") {
          $('#panels-ajax-tab-container-' + target_id).html($tab.data('panels-ajax-tab-cache'));
          Drupal.attachBehaviors($('#panels-ajax-tab-container-' + target_id));
          $(container).data('loading', false);
          
          // Trigger optional callback
          if (callback) {
            callback.call(this, $tab);
          }
        }
        else {
          $.ajax({
            url: Drupal.settings.basePath + 'panels_ajax_tab/' + panel_name + '/' + entity_context,
            datatype: 'html',
            cache: true,
            beforeSend: function(xhr) {
              $('#panels-ajax-tab-container-' + target_id).html('<img class="loading" src="' + Drupal.settings.basePath + Drupal.settings.panel_ajax_tab.path + '/images/loading.gif"/>');
            },
            error: function(jqXHR, textStatus, errorThrown) {
              $('#panels-ajax-tab-container-' + target_id).html('Error: ' + errorThrown);
              $(container).data('loading', false);
            }
          }).done(function(data) {
            $('#panels-ajax-tab-container-' + target_id).html(data);
            Drupal.attachBehaviors($('#panels-ajax-tab-container-' + target_id));
            $(container).data('loading', false);
            
            // Cache the contents
            $tab.data('panels-ajax-tab-cache', $('#panels-ajax-tab-container-' + target_id).html());
            
            // Trigger optional callback
            if (callback) {
              callback.call(this, $tab);
            }
          })
        }
        $tab.parent().siblings().removeClass('active');
        $tab.parent().addClass('active');
      });
    }
  });
})(jQuery);
