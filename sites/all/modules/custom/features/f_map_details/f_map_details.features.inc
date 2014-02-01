<?php
/**
 * @file
 * f_map_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_map_details_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_map_details_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_map_details_node_info() {
  $items = array(
    'map_data' => array(
      'name' => t('Map Data'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
