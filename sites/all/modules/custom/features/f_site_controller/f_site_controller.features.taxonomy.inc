<?php
/**
 * @file
 * f_site_controller.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function f_site_controller_taxonomy_default_vocabularies() {
  return array(
    'vocab_elections' => array(
      'name' => 'Elections',
      'machine_name' => 'vocab_elections',
      'description' => 'Tags to associate content with a particular election. Like india-elections-2014 or delhi-elections-2013 etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vocab_states' => array(
      'name' => 'States',
      'machine_name' => 'vocab_states',
      'description' => 'List of states and union territories in India, to tag various content like candidates etc. ',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
