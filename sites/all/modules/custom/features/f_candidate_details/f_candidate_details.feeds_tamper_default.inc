<?php
/**
 * @file
 * f_candidate_details.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function f_candidate_details_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'candidate_data_import-gender-convert_case';
  $feeds_tamper->importer = 'candidate_data_import';
  $feeds_tamper->source = 'gender';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert case';
  $export['candidate_data_import-gender-convert_case'] = $feeds_tamper;

  return $export;
}
