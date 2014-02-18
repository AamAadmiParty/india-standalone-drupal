(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.fix_donation_widget_right_sidebar = {
    attach: function(context) {
      var donation_pos = $( ".aap-donation-right-class" ).offset();
      if (donation_pos != null) {
        donation_pos = donation_pos.top;
        $(window).scroll(function() { //when window is scrolled
          $pos = donation_pos - $(window).scrollTop();
          if ($pos < 65) {
            $( ".aap-donation-right-class" ).addClass('aap-donation-right-class-fix');
          } else {
            $( ".aap-donation-right-class" ).removeClass('aap-donation-right-class-fix');
          }
        });
      };
    }
  }
}
)(jQuery, Drupal, this, this.document);




