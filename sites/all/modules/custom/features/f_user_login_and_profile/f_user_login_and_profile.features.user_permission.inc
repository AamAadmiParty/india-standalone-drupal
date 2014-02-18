<?php
/**
 * @file
 * f_user_login_and_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_user_login_and_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: access connections tab.
  $permissions['access connections tab'] = array(
    'name' => 'access connections tab',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: add authenticated twitter accounts.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'twitter',
  );

  // Exported permission: add twitter accounts.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'twitter',
  );

  // Exported permission: administer oauth connector.
  $permissions['administer oauth connector'] = array(
    'name' => 'administer oauth connector',
    'roles' => array(),
    'module' => 'oauthconnector',
  );

  // Exported permission: administer pcp.
  $permissions['administer pcp'] = array(
    'name' => 'administer pcp',
    'roles' => array(),
    'module' => 'pcp',
  );

  // Exported permission: administer twitter accounts.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(),
    'module' => 'twitter',
  );

  // Exported permission: connect with oauthconnector_facebook.
  $permissions['connect with oauthconnector_facebook'] = array(
    'name' => 'connect with oauthconnector_facebook',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_google.
  $permissions['connect with oauthconnector_google'] = array(
    'name' => 'connect with oauthconnector_google',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_linkedin.
  $permissions['connect with oauthconnector_linkedin'] = array(
    'name' => 'connect with oauthconnector_linkedin',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_twitter.
  $permissions['connect with oauthconnector_twitter'] = array(
    'name' => 'connect with oauthconnector_twitter',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: edit own profile_personal_details profile.
  $permissions['edit own profile_personal_details profile'] = array(
    'name' => 'edit own profile_personal_details profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: sync local profile with connections.
  $permissions['sync local profile with connections'] = array(
    'name' => 'sync local profile with connections',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: view any profile_personal_details profile.
  $permissions['view any profile_personal_details profile'] = array(
    'name' => 'view any profile_personal_details profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
