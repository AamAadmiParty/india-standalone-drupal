<?php
/**
 * @file
 * f_candidate_details.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_candidate_details_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node ct_candidate_details content.
  $permissions['administer panelizer node ct_candidate_details content'] = array(
    'name' => 'administer panelizer node ct_candidate_details content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ct_candidate_details context.
  $permissions['administer panelizer node ct_candidate_details context'] = array(
    'name' => 'administer panelizer node ct_candidate_details context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ct_candidate_details defaults.
  $permissions['administer panelizer node ct_candidate_details defaults'] = array(
    'name' => 'administer panelizer node ct_candidate_details defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ct_candidate_details layout.
  $permissions['administer panelizer node ct_candidate_details layout'] = array(
    'name' => 'administer panelizer node ct_candidate_details layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ct_candidate_details overview.
  $permissions['administer panelizer node ct_candidate_details overview'] = array(
    'name' => 'administer panelizer node ct_candidate_details overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node ct_candidate_details settings.
  $permissions['administer panelizer node ct_candidate_details settings'] = array(
    'name' => 'administer panelizer node ct_candidate_details settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create ct_candidate_details content.
  $permissions['create ct_candidate_details content'] = array(
    'name' => 'create ct_candidate_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any ct_candidate_details content.
  $permissions['delete any ct_candidate_details content'] = array(
    'name' => 'delete any ct_candidate_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own ct_candidate_details content.
  $permissions['delete own ct_candidate_details content'] = array(
    'name' => 'delete own ct_candidate_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any ct_candidate_details content.
  $permissions['edit any ct_candidate_details content'] = array(
    'name' => 'edit any ct_candidate_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own ct_candidate_details content.
  $permissions['edit own ct_candidate_details content'] = array(
    'name' => 'edit own ct_candidate_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: publish any ct_candidate_details content.
  $permissions['publish any ct_candidate_details content'] = array(
    'name' => 'publish any ct_candidate_details content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable ct_candidate_details content.
  $permissions['publish editable ct_candidate_details content'] = array(
    'name' => 'publish editable ct_candidate_details content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own ct_candidate_details content.
  $permissions['publish own ct_candidate_details content'] = array(
    'name' => 'publish own ct_candidate_details content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any ct_candidate_details content.
  $permissions['unpublish any ct_candidate_details content'] = array(
    'name' => 'unpublish any ct_candidate_details content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable ct_candidate_details content.
  $permissions['unpublish editable ct_candidate_details content'] = array(
    'name' => 'unpublish editable ct_candidate_details content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own ct_candidate_details content.
  $permissions['unpublish own ct_candidate_details content'] = array(
    'name' => 'unpublish own ct_candidate_details content',
    'roles' => array(),
    'module' => 'publishcontent',
  );

  return $permissions;
}
