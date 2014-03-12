<?php
/**
 * @file
 * f_aap_domain_access.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_aap_domain_access_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_add_roles';
  $strongarm->value = '0';
  $export['domain_add_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_bootstrap_modules';
  $strongarm->value = array(
    0 => 'domain_alias',
    1 => 'domain_conf',
  );
  $export['domain_bootstrap_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_classes';
  $strongarm->value = 'domain-[current-domain:machine_name]';
  $export['domain_classes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_cron_rule';
  $strongarm->value = 1;
  $export['domain_cron_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_debug';
  $strongarm->value = '0';
  $export['domain_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_default_source';
  $strongarm->value = '-1';
  $export['domain_default_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_edit_on_primary';
  $strongarm->value = 1;
  $export['domain_edit_on_primary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_force_admin';
  $strongarm->value = '0';
  $export['domain_force_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_grant_all';
  $strongarm->value = 'user/*/track';
  $export['domain_grant_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_list_size';
  $strongarm->value = '30';
  $export['domain_list_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_paths';
  $strongarm->value = 'node/%n
node/%n/edit
comment/reply/%n
node/add/book/parent/%n
book/export/html/%n
node/%n/outline';
  $export['domain_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_roles';
  $strongarm->value = array(
    0 => array(
      'DOMAIN_ALL' => 0,
      'aamaadmiparty_org' => 0,
      'karnataka_aamaadmiparty_org' => 0,
      'maharashtra_aamaadmiparty_org' => 0,
      'rajasthan_aamaadmiparty_org' => 0,
    ),
    1 => array(
      'DOMAIN_ALL' => 0,
      'aamaadmiparty_org' => 1,
      'karnataka_aamaadmiparty_org' => 0,
      'maharashtra_aamaadmiparty_org' => 0,
      'rajasthan_aamaadmiparty_org' => 0,
    ),
    2 => array(
      'DOMAIN_ALL' => 0,
      'aamaadmiparty_org' => 0,
      'karnataka_aamaadmiparty_org' => 0,
      'maharashtra_aamaadmiparty_org' => 0,
      'rajasthan_aamaadmiparty_org' => 0,
    ),
    4 => array(
      'DOMAIN_ALL' => 0,
      'aamaadmiparty_org' => 0,
      'karnataka_aamaadmiparty_org' => 0,
      'maharashtra_aamaadmiparty_org' => 0,
      'rajasthan_aamaadmiparty_org' => 0,
    ),
    5 => array(
      'DOMAIN_ALL' => 0,
      'aamaadmiparty_org' => 0,
      'karnataka_aamaadmiparty_org' => 0,
      'maharashtra_aamaadmiparty_org' => 0,
      'rajasthan_aamaadmiparty_org' => 0,
    ),
    9 => array(
      'DOMAIN_ALL' => 0,
      'aamaadmiparty_org' => 1,
      'karnataka_aamaadmiparty_org' => 0,
      'maharashtra_aamaadmiparty_org' => 0,
      'rajasthan_aamaadmiparty_org' => 0,
    ),
  );
  $export['domain_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_search';
  $strongarm->value = '0';
  $export['domain_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_select_format';
  $strongarm->value = '1';
  $export['domain_select_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_seo';
  $strongarm->value = '0';
  $export['domain_seo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_settings_behavior';
  $strongarm->value = '0';
  $export['domain_settings_behavior'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_settings_forms';
  $strongarm->value = '';
  $export['domain_settings_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_settings_form_visibility';
  $strongarm->value = '0';
  $export['domain_settings_form_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_sitename_override';
  $strongarm->value = 1;
  $export['domain_sitename_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_vertical_tab';
  $strongarm->value = '0';
  $export['domain_vertical_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_www';
  $strongarm->value = '0';
  $export['domain_www'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_xmlrpc_rule';
  $strongarm->value = 0;
  $export['domain_xmlrpc_rule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_cross_domains';
  $strongarm->value = '';
  $export['googleanalytics_cross_domains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_domain_mode';
  $strongarm->value = '0';
  $export['googleanalytics_domain_mode'] = $strongarm;

  return $export;
}
