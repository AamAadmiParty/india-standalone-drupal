<?php
/**
 * @file
 * f_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'search',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search',
  );

  return $permissions;
}
