<?php
/**
 * @file
 * f_aap_domain_access.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_aap_domain_access_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
