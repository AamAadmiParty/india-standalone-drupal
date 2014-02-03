(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.aap_republic_day = {
      attach: function(context) {
         var options = {
          sortOpt: true,
          sortOptCallback: function(a, b) {
            return a.text > b.text ? 1 : a.text < b.text ? -1 : 0;
          },
        }
        $('#india-loksabha-table').ddTableFilter(options);
      	/*
        republic_image = $('#republic-day-constitution-image').detach();
        republic_explore = $('#republic-day-explore-link').detach();
        $('body.section-republic-day #aap-panel-variant-default').before(republic_image);
        $('body.section-republic-day #aap-panel-variant-default').before(republic_explore);
        */
      }
  }
}
)(jQuery, Drupal, this, this.document);




