<?php
/**
 * @file
 * f_candidate_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_candidate_details_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_candidate_details_node_info() {
  $items = array(
    'ct_candidate_details' => array(
      'name' => t('Candidate Details'),
      'base' => 'node_content',
      'description' => t('Holds details of a candidate (shortlisted or selected) nominated for elections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter details of the candidate below in relevant fields. An example candidate profile can be seen here - http://myneta.info/delhi2013/candidate.php?candidate_id=65'),
    ),
  );
  return $items;
}
