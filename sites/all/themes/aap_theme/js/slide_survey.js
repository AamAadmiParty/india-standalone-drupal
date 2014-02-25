(function ($, Drupal, window, document, undefined) {
	Drupal.behaviors.slide_survey = {
			attach: function(context) { 
				// Proceed only if the page has a .surveymonkey-drupal-popup element
				if ($('.surveymonkey-drupal-popup')) {
					// Get the required details
					var survey_delay = Drupal.settings.aap_tweaks.survey_delay;
					var survey_in_cookie = $.cookie("aap_survey_tracker");
					var survey = $('.surveymonkey-drupal-popup').detach();
					var survey_to_show = survey.attr('id');

					// Creat a link to close the survey, and append it to the survey
					var close_link = $("<a class='survey-close-btn' href='#'>Close</a>");
					survey.append(close_link);
					close_link.click(function(e){
						$(this).parent().slideUp('slow');
						// Update the cookie to record what survey was closed, we do not show closed surverys again
						$.cookie("aap_survey_tracker", survey_to_show);
						e.preventDefault();
						return false;
					});

					// After a set amount of time (we will not make it configurable now) the specific
					// survery pane is moved from footer to first child of the body and opened with slide effect
					if (survey_in_cookie != survey_to_show) {
						setTimeout(function() {
							window.scrollTo(0,0);
							// Append survey at the start of the page
							$('body').children().first().before(survey);
							survey.slideDown('slow');
						}, survey_delay);
					}
				}
			}
	}	
}
)(jQuery, Drupal, this, this.document); 