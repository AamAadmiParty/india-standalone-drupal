<?php
/**
 * @file
 * f_aap_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_aap_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_aap_media_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_aap_media_node_info() {
  $items = array(
    'videos' => array(
      'name' => t('Videos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
