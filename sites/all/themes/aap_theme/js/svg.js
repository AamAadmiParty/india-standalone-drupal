(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.svg_image = {
    attach: function(context) {
      // Change the color of state, which has content
      $("path").each(function() {
        var state = $(this).attr('id');
        if (state != 'foreign_1_' &&state != 'water_1_') {
        if (!hasData(state)) {
          $(this).css("fill", "#CCC");
        }
      }
      });

      // Adds hover effect on states
      $("path").hover(function() {
        var hoveredState = $(this).attr('id');
        $.cookie('state_color',$(this).attr('fill') );
        // if user hover on foreign or water region, then do not show popup
        if (hoveredState != 'foreign_1_' && hoveredState != 'water_1_') {
          if (hasData(hoveredState)) {
            var styles = {
              fill : "#E9BAA8",
              cursor: "pointer"
            };
            $( this ).css( styles );
          }
        }
      }, function() {
        var hoveredState = $(this).attr('id');
        if (hoveredState != 'foreign_1_' && hoveredState != 'water_1_') {
          if (hasData(hoveredState)) {
            var styles = {
              fill : $.cookie('state_color'),
              cursor: "auto"
            };
            $( this ).css( styles );
          }
          else {
            var styles = {
              fill : "#CCC",
              cursor: "auto"
            };
            $( this ).css( styles );
          }
        }
      });

      $("path, text").click(function() {
        var clickedState = $(this).attr('id');
        // if user click on foreign or water region, then do not show popup
        if (clickedState != 'foreign_1_' && clickedState != 'water_1_') {
          getData(clickedState);
        };
      });

      // function to check if it has data
      function hasData(clickedState) {
        var state_div = $( "div.gmap-state:contains("+clickedState+")" );
        if (state_div.length != 0)  {
          return state_div;
        }
        else {
          return false;
        }
      }
      function getData(clickedState) {
        $(".view-svg-maps").append("<div id=map_data></div>");
        var state_div = hasData(clickedState);
        if (state_div) {
          var title = state_div.siblings('.gmap-title').html();
          var data = state_div.siblings('.gmap-body').html();
          $( "#map_data" ).html(data).dialog({
            modal: true,
            title: title,
            width: 750,
            height: 520,
            resizable:false,
          });/*dialog({ });*/
        }
      }
    }
  }
}
)(jQuery, Drupal, this, this.document);
