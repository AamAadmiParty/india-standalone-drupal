<?php
/**
 * @file
 * f_map_details.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_map_details_user_default_permissions() {
  $permissions = array();

  // Exported permission: create map_data content.
  $permissions['create map_data content'] = array(
    'name' => 'create map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any map_data content.
  $permissions['delete any map_data content'] = array(
    'name' => 'delete any map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own map_data content.
  $permissions['delete own map_data content'] = array(
    'name' => 'delete own map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any map_data content.
  $permissions['edit any map_data content'] = array(
    'name' => 'edit any map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own map_data content.
  $permissions['edit own map_data content'] = array(
    'name' => 'edit own map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: publish any map_data content.
  $permissions['publish any map_data content'] = array(
    'name' => 'publish any map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable map_data content.
  $permissions['publish editable map_data content'] = array(
    'name' => 'publish editable map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own map_data content.
  $permissions['publish own map_data content'] = array(
    'name' => 'publish own map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any map_data content.
  $permissions['unpublish any map_data content'] = array(
    'name' => 'unpublish any map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable map_data content.
  $permissions['unpublish editable map_data content'] = array(
    'name' => 'unpublish editable map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own map_data content.
  $permissions['unpublish own map_data content'] = array(
    'name' => 'unpublish own map_data content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  return $permissions;
}
