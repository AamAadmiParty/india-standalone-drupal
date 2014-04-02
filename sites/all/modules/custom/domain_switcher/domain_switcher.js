(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.domain_switcher = {
      attach: function(context) {
        $('#domain-switcher').change(function() {
          window.location.href = 'http://' + $(this).val();
        });
      }
  }

}
)(jQuery, Drupal, this, this.document);
