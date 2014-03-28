<?php
/**
 * @file
 * f_selfie.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_selfie_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node selfie defaults.
  $permissions['administer panelizer node selfie defaults'] = array(
    'name' => 'administer panelizer node selfie defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: create selfie content.
  $permissions['create selfie content'] = array(
    'name' => 'create selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: create selfie content on assigned domains.
  $permissions['create selfie content on assigned domains'] = array(
    'name' => 'create selfie content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete any selfie content.
  $permissions['delete any selfie content'] = array(
    'name' => 'delete any selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own selfie content.
  $permissions['delete own selfie content'] = array(
    'name' => 'delete own selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete selfie content on assigned domains.
  $permissions['delete selfie content on assigned domains'] = array(
    'name' => 'delete selfie content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: edit any selfie content.
  $permissions['edit any selfie content'] = array(
    'name' => 'edit any selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own selfie content.
  $permissions['edit own selfie content'] = array(
    'name' => 'edit own selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: publish any selfie content.
  $permissions['publish any selfie content'] = array(
    'name' => 'publish any selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable selfie content.
  $permissions['publish editable selfie content'] = array(
    'name' => 'publish editable selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own selfie content.
  $permissions['publish own selfie content'] = array(
    'name' => 'publish own selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any selfie content.
  $permissions['unpublish any selfie content'] = array(
    'name' => 'unpublish any selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable selfie content.
  $permissions['unpublish editable selfie content'] = array(
    'name' => 'unpublish editable selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own selfie content.
  $permissions['unpublish own selfie content'] = array(
    'name' => 'unpublish own selfie content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: update selfie content on assigned domains.
  $permissions['update selfie content on assigned domains'] = array(
    'name' => 'update selfie content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
