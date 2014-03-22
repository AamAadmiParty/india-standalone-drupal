<?php
/**
 * @file
 * f_wysiwyg_image.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_wysiwyg_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer imce.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format restricted_html.
  $permissions['use text format restricted_html'] = array(
    'name' => 'use text format restricted_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
