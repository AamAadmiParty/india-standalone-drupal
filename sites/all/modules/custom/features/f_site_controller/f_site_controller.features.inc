<?php
/**
 * @file
 * f_site_controller.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_site_controller_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
