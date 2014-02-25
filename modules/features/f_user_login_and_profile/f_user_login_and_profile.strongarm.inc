<?php
/**
 * @file
 * f_user_login_and_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_user_login_and_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__profile_personal_details';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__profile_personal_details'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_enabled_fields';
  $strongarm->value = array(
    2 => '14',
    3 => '15',
  );
  $export['pcp_enabled_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_enable_user_picture';
  $strongarm->value = 1;
  $export['pcp_enable_user_picture'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_hide_block_on_complete';
  $strongarm->value = 1;
  $export['pcp_hide_block_on_complete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_profile2_profile_personal_details_hide_block_on_complete';
  $strongarm->value = 1;
  $export['pcp_profile2_profile_personal_details_hide_block_on_complete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_api';
  $strongarm->value = 'https://api.twitter.com';
  $export['twitter_api'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_key';
  $strongarm->value = 'ro1KF0wBuCV2fXcCir3vA';
  $export['twitter_consumer_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_consumer_secret';
  $strongarm->value = 'wl3qpkbqT8h3hnUrp3qlvlyOjdGFdRg4xf7s8nzyjk';
  $export['twitter_consumer_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_expire';
  $strongarm->value = '0';
  $export['twitter_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_host';
  $strongarm->value = 'http://twitter.com';
  $export['twitter_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_import';
  $strongarm->value = 0;
  $export['twitter_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_search';
  $strongarm->value = 'http://search.twitter.com';
  $export['twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_signin_button';
  $strongarm->value = 'Sign-in-with-Twitter-darker.png';
  $export['twitter_signin_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_signin_register';
  $strongarm->value = '1';
  $export['twitter_signin_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_tinyurl';
  $strongarm->value = 'http://tinyurl.com';
  $export['twitter_tinyurl'] = $strongarm;

  return $export;
}
