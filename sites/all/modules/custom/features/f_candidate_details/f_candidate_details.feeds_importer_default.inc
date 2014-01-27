<?php
/**
 * @file
 * f_candidate_details.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function f_candidate_details_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'candidate_data_import';
  $feeds_importer->config = array(
    'name' => 'Candidate Data Import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'field_cd_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'state',
            'target' => 'field_cd_state',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'loksabha',
            'target' => 'field_cd_pc',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'mobile',
            'target' => 'field_cd_phone',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'email',
            'target' => 'field_cd_email',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'gender',
            'target' => 'field_cd_gender',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'dob',
            'target' => 'field_cd_dob_text',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'education',
            'target' => 'field_cd_education_qualification',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'link',
            'target' => 'field_cd_links:url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'linktitle',
            'target' => 'field_cd_links:title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ct_candidate_details',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['candidate_data_import'] = $feeds_importer;

  return $export;
}
