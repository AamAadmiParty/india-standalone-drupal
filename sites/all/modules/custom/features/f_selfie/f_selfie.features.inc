<?php
/**
 * @file
 * f_selfie.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_selfie_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_selfie_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_selfie_node_info() {
  $items = array(
    'selfie' => array(
      'name' => t('Selfie'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
