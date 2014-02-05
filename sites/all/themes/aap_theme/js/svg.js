(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.svg_image = {
    attach: function(context) {

      $("path").click(function() {
        $(".view-svg-maps").append("<div id=popup_content></div>");
        var clickedState = $(this).attr('id');

        // if user click on foreign or water region, then do not show popup
        if (clickedState != 'foreign_1_' && clickedState != 'water_1_') {
          getData(clickedState);
        };
      });

      function getData(clickedState) {
        var state_div = $( "div.gmap-state:contains("+clickedState+")" );
        if (state_div.length != 0) {
          var title = state_div.siblings('.gmap-title').html();
          var data = state_div.siblings('.gmap-body').html();
          $( "#popup_content" ).html(data).dialog({ title: title});
        }
        // if content is not added
        else {
          $( "#popup_content" ).html("Data yet to be added").dialog({ title: 'Data yet to be added'});
        }
      }
    }
  }
}
)(jQuery, Drupal, this, this.document);
