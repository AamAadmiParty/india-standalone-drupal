<?php
/**
 * @file
 * f_content_and_user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function f_content_and_user_roles_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => '6',
  );

  // Exported role: Content Approver.
  $roles['Content Approver'] = array(
    'name' => 'Content Approver',
    'weight' => '2',
  );

  // Exported role: Content Author.
  $roles['Content Author'] = array(
    'name' => 'Content Author',
    'weight' => '3',
  );

  return $roles;
}
