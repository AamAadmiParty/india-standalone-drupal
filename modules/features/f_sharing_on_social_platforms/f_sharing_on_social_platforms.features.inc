<?php
/**
 * @file
 * f_sharing_on_social_platforms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_sharing_on_social_platforms_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
