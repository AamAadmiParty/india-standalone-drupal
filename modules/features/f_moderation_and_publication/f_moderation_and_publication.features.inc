<?php
/**
 * @file
 * f_moderation_and_publication.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_moderation_and_publication_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
