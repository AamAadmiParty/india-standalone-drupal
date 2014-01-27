<?php
/**
 * @file
 * f_candidate_details.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function f_candidate_details_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:ct_candidate_details.
  $config['node:ct_candidate_details'] = array(
    'instance' => 'node:ct_candidate_details',
    'config' => array(
      'title' => array(
        'value' => '[node:field_cd_name] | [node:field_cd_pc] Constituency Candidate | India Lok Sabha Elections 2014 | [site:name]',
      ),
    ),
  );

  return $config;
}
