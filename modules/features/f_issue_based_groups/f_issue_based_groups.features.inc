<?php
/**
 * @file
 * f_issue_based_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_issue_based_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_issue_based_groups_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_issue_based_groups_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('TODO'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
