(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.svg_image = {
    attach: function(context) {

      $("path").click(function() {
        $(".view-svg-maps").append("<div id=popup_content></div>");
        var clickedState = $(this).attr('id');
        getData(clickedState);
      });

      function getData(clickedState) {
        var state_div = $( "div.gmap-state:contains("+clickedState+")" );
        if (state_div.length != 0) {
           var title = state_div.siblings('.gmap-title').html();
        var data = state_div.siblings('.gmap-body').html();
        $( "#popup_content" ).html(data).dialog({ title: title,minWidth: 300,maxWidth:400});
        }
      }
    }
  }
}
)(jQuery, Drupal, this, this.document);
