<?php
/**
 * @file
 * f_site_controller.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_site_controller_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocab_elections_pattern';
  $strongarm->value = 'election/[term:name]';
  $export['pathauto_taxonomy_term_vocab_elections_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocab_ls_pattern';
  $strongarm->value = 'candidate-details-by-lok-sabha/[term:name]';
  $export['pathauto_taxonomy_term_vocab_ls_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocab_states_pattern';
  $strongarm->value = 'candidate-details-by-state/[term:name]';
  $export['pathauto_taxonomy_term_vocab_states_pattern'] = $strongarm;

  return $export;
}
