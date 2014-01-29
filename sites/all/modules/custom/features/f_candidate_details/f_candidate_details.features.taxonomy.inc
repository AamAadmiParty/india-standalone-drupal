<?php
/**
 * @file
 * f_candidate_details.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_candidate_details_taxonomy_default_vocabularies() {
  return array(
    'vocab_ls' => array(
      'name' => 'Lok Sabhas',
      'machine_name' => 'vocab_ls',
      'description' => 'List of Parliament Constituencies (Lok Sabha\'s) of India',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
