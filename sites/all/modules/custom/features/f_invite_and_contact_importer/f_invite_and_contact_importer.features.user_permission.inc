<?php
/**
 * @file
 * f_invite_and_contact_importer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_invite_and_contact_importer_user_default_permissions() {
  $permissions = array();

  // Exported permission: access contact importer.
  $permissions['access contact importer'] = array(
    'name' => 'access contact importer',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact_importer',
  );

  // Exported permission: administer contact importer.
  $permissions['administer contact importer'] = array(
    'name' => 'administer contact importer',
    'roles' => array(),
    'module' => 'contact_importer',
  );

  // Exported permission: administer invitations.
  $permissions['administer invitations'] = array(
    'name' => 'administer invitations',
    'roles' => array(),
    'module' => 'invite',
  );

  // Exported permission: send invitations.
  $permissions['send invitations'] = array(
    'name' => 'send invitations',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'invite',
  );

  // Exported permission: send mass invitations.
  $permissions['send mass invitations'] = array(
    'name' => 'send mass invitations',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'invite',
  );

  // Exported permission: track invitations.
  $permissions['track invitations'] = array(
    'name' => 'track invitations',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'invite',
  );

  // Exported permission: view invite statistics.
  $permissions['view invite statistics'] = array(
    'name' => 'view invite statistics',
    'roles' => array(),
    'module' => 'invite_stats',
  );

  // Exported permission: view own invite statistics.
  $permissions['view own invite statistics'] = array(
    'name' => 'view own invite statistics',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'invite_stats',
  );

  // Exported permission: withdraw own accepted invitations.
  $permissions['withdraw own accepted invitations'] = array(
    'name' => 'withdraw own accepted invitations',
    'roles' => array(),
    'module' => 'invite',
  );

  // Exported permission: withdraw own invitations.
  $permissions['withdraw own invitations'] = array(
    'name' => 'withdraw own invitations',
    'roles' => array(),
    'module' => 'invite',
  );

  return $permissions;
}
