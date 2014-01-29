(function ($, Drupal, window, document, undefined) {
	Drupal.behaviors.redirect_to_donate_page = {
			attach: function(context) { 
				// If ever a link to donate.aamaadmiparty.org is clicked, pass on 'aap_campaign_tracker' cookie value 							to the page.

				// This script runs on every AAP page load and does the below stuff mentioned in comments
				var vals = {}, hash, flag_site_entry = false, flag_campaign_data_in_url = false;

				// Check if the referrer is non aamaadmiparty.org URL, if yes, set that as "starter source"
				if (document.referrer.indexOf("aamaadmiparty.org") < 0) {
					var flag_site_entry = true;
					if (document.referrer == '' || document.referrer == null) {
						vals.utm_source = 'direct';						
					}
					else {

						vals.utm_source = document.referrer;}
				}
				// If the URL has utm_ mentions in it, start collecting those values (replace "starter source" if utm_source is present)
				if (window.location.href.indexOf("utm_") >= 0) {
					var hashes = window.location.href.slice(window.location.href.indexOf('?') + 1).split('&');
					flag_campaign_data_in_url = true;
					for(var i = 0; i < hashes.length; i++)
					{
						hash = hashes[i].split('=');
						if (hash[0].indexOf('utm_source') >= 0 && hash[1] != '') {
							vals.utm_source = hash[1];
						}
						if (hash[0].indexOf('utm_medium') >= 0) {
							vals.utm_medium = hash[1];
						}
						if (hash[0].indexOf('utm_term') >=0 ) {
							vals.utm_term = hash[1];
						}
						if (hash[0].indexOf('utm_content') >=0 ) {
							vals.utm_content = hash[1];
						}
						if (hash[0].indexOf('utm_campaign') >=0 ) {
							vals.utm_campaign = hash[1];
						}
					}
				}
				// Save all the values in user cookie 'aap_campaign_tracker' creating it, or replacing it if it already exists (only if referrer or utm_ present)
				if (flag_site_entry == true || flag_campaign_data_in_url == true) {
					$.cookie('aap_campaign_tracker',  JSON.stringify(vals));
				}


				// Add onClick _link to all <a> elements on page where href contains example-B.co.uk
				$("a[href*='donate.aamaadmiparty.org']").click(function() {
					var amount = $('input[name=choice]:checked', '.aap-donation-class form').val();
					var c = JSON.parse($.cookie("aap_campaign_tracker"));
					var link = $(this).attr('href') + '?utm_source='+ c.utm_source +'&utm_medium='+ c.utm_medium +'&utm_term='+ c.utm_term +'&utm_content='+ 	c.utm_content +'&utm_campaign=' + c.utm_campaign + '&amt=' + amount;
					window.location = link;
					return false;

				});
			}
	}	

}
)(jQuery, Drupal, this, this.document); 




