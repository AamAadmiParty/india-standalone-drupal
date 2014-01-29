<?php
/**
 * @file
 * f_user_login_and_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_user_login_and_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "oauthconnector" && $api == "") {
    return array("version" => "");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function f_user_login_and_profile_default_profile2_type() {
  $items = array();
  $items['profile_personal_details'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profile_personal_details",
    "label" : "Personal Details",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}
