(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.svg_image = {
    attach: function(context) {

      $("path").click(function() {

        $(".view-data-on-map").append("<div id=toPopup><div class=close></div><div id=popup_content></div></div>");
        var clickedState = $(this).attr('id');
        setTimeout(function(){ // then show popup, deley in .5 second
          loadPopup(clickedState); // function show popup
          }, 100); // .1 second
      });

      $("div.close").live("click", function() {
          disablePopup();  // function close pop up
        });

        function loadPopup(clickedState) {
            $('#popup_content').empty();
            disablePopup();
            var state = $( "div.gmap-state:contains("+clickedState+")" ).text();
            if (state.length != 0) {
              var state_data = $( "div.gmap-state:contains("+ clickedState + ")" ).next().text();
              $('#popup_content').append('<p>' + state + '<br>' + state_data + '</p>');
              $("#toPopup").fadeIn(0500); // fadein popup div
              $("#backgroundPopup").css("opacity", "0.7"); // css opacity, supports IE7, IE8
              $("#backgroundPopup").fadeIn(0001);
            }
        }

        function disablePopup() {
            $("#toPopup").fadeOut("normal");
            $("#backgroundPopup").fadeOut("normal");
        }
    }
  }
}
)(jQuery, Drupal, this, this.document);
