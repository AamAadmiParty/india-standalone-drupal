<?php

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function aap_campaign_profile_details() {
  return array(
    'name' => 'AAP Campaign Profile',
    'description' => 'This will install AAP campaign site',
  );
}

/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during
 *   the final stage. The keys of the array will be used internally,
 *   while the values will be displayed to the user in the installer
 *   task list.
 */
function aap_campaign_profile_install_tasks(&$install_state) {
  $tasks = array();

  $tasks['aap_campaign_profile_task_set_variables'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  $tasks['aap_campaign_enable_theme'] = array(
    'display' => FALSE,
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );

  $tasks['aap_campaign_profile_task_flush_caches'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  return $tasks;
}

function aap_campaign_profile_task_set_variables() {
  // Set the first-day-of-the-week
  variable_set('date_first_day', 0);

  // Set-up the site front-page to be a login form
  variable_set('site_frontpage', 'front');

  // Set-up the admin-theme to be hw-admin
  variable_set('admin_theme', 'seven');

  // Enable clean-urls
  variable_set('clean_url', TRUE);

  // If it's the default site-name, usually via drush rename it to be aap_campaign specific
  if (variable_get('site_name', '') == 'Site-Install') {
    variable_set('site_name', 'AAP Campaign Drupal Site');
  }
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 * Allows the profile to alter the site configuration form.
 */
function aap_campaign_profile_form_install_configure_form_alter(&$form, $form_state) {

  // Pre-populate the site name and other variables
  $form['site_information']['site_name']['#default_value'] = "AAP Campaign Drupal Site";
  $form['site_information']['site_mail']['#default_value'] = "aap_admin@localhost.com";

  $form['admin_account']['account']['name']['#default_value'] = "aap_admin";
  $form['admin_account']['account']['mail']['#default_value'] = "aap_admin@localhost.com";

  $form['server_settings']['#collapsible'] = TRUE;
  $form['server_settings']['#collapsed'] = TRUE;
  $form['server_settings']['date_default_timezone']['#default_value'] = 'UTC';

  $form['update_notifications']['#collapsible'] = TRUE;
  $form['update_notifications']['#collapsed'] = TRUE;
  $form['update_notifications']['update_status_module']['#default_value'] = array(0, 0);

  if (count($form_state['input']) == 0) {
    $element_info = element_info('password_confirm');
    $process = array_merge($element_info['#process'], array(0 => 'aap_campaign_profile_process_password_confirm'));
    $form['admin_account']['account']['pass']['#process'] = $process;
  }
}

/**
 * Implementation of standard_password_confirm.
 */
function aap_campaign_profile_process_password_confirm($element) {
  $pwd = user_password();
  $element['pass1']['#attributes'] = array('value' => $pwd);
  $element['pass2']['#attributes'] = array('value' => $pwd);
  drupal_set_message('Password for aap_admin is '.$pwd);
  return $element;
}

function aap_campaign_enable_theme() {
  $enable_theme = array(
    'admin_theme' => 'seven',
    'theme_default' => 'bartik',
  );

  theme_enable($enable_theme);

  foreach ($enable_theme as $var => $theme) {
    if (!is_numeric($var)) {
      variable_set($var, $theme);
    }
  }
}

function aap_campaign_profile_task_flush_caches() {
  register_shutdown_function('exec','drush cc all');
}
