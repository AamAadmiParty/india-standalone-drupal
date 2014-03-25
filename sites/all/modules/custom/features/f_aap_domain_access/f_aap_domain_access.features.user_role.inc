<?php
/**
 * @file
 * f_aap_domain_access.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function f_aap_domain_access_user_default_roles() {
  $roles = array();

  // Exported role: All Domains Approver.
  $roles['All Domains Approver'] = array(
    'name' => 'All Domains Approver',
    'weight' => '9',
  );

  // Exported role: All Domains Author.
  $roles['All Domains Author'] = array(
    'name' => 'All Domains Author',
    'weight' => '7',
  );

  // Exported role: State Domains Approver.
  $roles['State Domains Approver'] = array(
    'name' => 'State Domains Approver',
    'weight' => '10',
  );

  // Exported role: State Domains Author.
  $roles['State Domains Author'] = array(
    'name' => 'State Domains Author',
    'weight' => '8',
  );

  return $roles;
}
