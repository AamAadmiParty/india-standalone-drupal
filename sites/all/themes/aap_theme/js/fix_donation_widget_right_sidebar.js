(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.fix_donation_widget_right_sidebar = {
    attach: function(context) {
      var donation_pos = $( ".aap-donation-right-class" ).offset().top;
      // compute the original width of right side donation widget and keep it that way
      // basically set it explicitly so that it remains in position when made 'fixed' later
      var donation_right_widget_width = $('.aap-donation-right-class').width();
      $('.aap-donation-right-class').width(donation_right_widget_width);
      $(window).scroll(function() { //when window is scrolled
        $pos = donation_pos - $(window).scrollTop();
        if ($pos < 65) {
          $( ".aap-donation-right-class" ).addClass('aap-donation-right-class-fix');
        } else {
           $( ".aap-donation-right-class" ).removeClass('aap-donation-right-class-fix');
        }
      });
    }
  }
}
)(jQuery, Drupal, this, this.document);




