(function ($) {

  Drupal.behaviors.wysiwygSummaryTextareaSummary = {
    attach: function (context, settings) {

      // Change the value of the summary format whenever the main textarea
      // format changes.
      $('.field-type-text-with-summary div.text-format-wrapper > fieldset.filter-wrapper select').change(function(event) {
        var value = $(this).val();
        $('.text-summary-wrapper select', $(this).closest('.text-format-wrapper')).val(value);
      });

    }
  };

}(jQuery));