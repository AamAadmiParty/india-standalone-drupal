<?php
/**
 * @file
 * f_comments_disqus.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_comments_disqus_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer disqus.
  $permissions['administer disqus'] = array(
    'name' => 'administer disqus',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: display disqus comments on profile.
  $permissions['display disqus comments on profile'] = array(
    'name' => 'display disqus comments on profile',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'disqus',
  );

  // Exported permission: toggle disqus comments.
  $permissions['toggle disqus comments'] = array(
    'name' => 'toggle disqus comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'disqus',
  );

  // Exported permission: view disqus comments.
  $permissions['view disqus comments'] = array(
    'name' => 'view disqus comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'disqus',
  );

  return $permissions;
}
