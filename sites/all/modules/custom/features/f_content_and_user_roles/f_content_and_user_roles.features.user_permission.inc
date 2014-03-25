<?php
/**
 * @file
 * f_content_and_user_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_content_and_user_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: create basic_page content.
  $permissions['create basic_page content'] = array(
    'name' => 'create basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
    ),
    'module' => 'node',
  );

  // Exported permission: create news content.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any basic_page content.
  $permissions['delete any basic_page content'] = array(
    'name' => 'delete any basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any news content.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own basic_page content.
  $permissions['delete own basic_page content'] = array(
    'name' => 'delete own basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own news content.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any basic_page content.
  $permissions['edit any basic_page content'] = array(
    'name' => 'edit any basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any news content.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own basic_page content.
  $permissions['edit own basic_page content'] = array(
    'name' => 'edit own basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own news content.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: publish any basic_page content.
  $permissions['publish any basic_page content'] = array(
    'name' => 'publish any basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any event content.
  $permissions['publish any event content'] = array(
    'name' => 'publish any event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any news content.
  $permissions['publish any news content'] = array(
    'name' => 'publish any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable basic_page content.
  $permissions['publish editable basic_page content'] = array(
    'name' => 'publish editable basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable event content.
  $permissions['publish editable event content'] = array(
    'name' => 'publish editable event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable news content.
  $permissions['publish editable news content'] = array(
    'name' => 'publish editable news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own basic_page content.
  $permissions['publish own basic_page content'] = array(
    'name' => 'publish own basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own event content.
  $permissions['publish own event content'] = array(
    'name' => 'publish own event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own news content.
  $permissions['publish own news content'] = array(
    'name' => 'publish own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any basic_page content.
  $permissions['unpublish any basic_page content'] = array(
    'name' => 'unpublish any basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any event content.
  $permissions['unpublish any event content'] = array(
    'name' => 'unpublish any event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any news content.
  $permissions['unpublish any news content'] = array(
    'name' => 'unpublish any news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable basic_page content.
  $permissions['unpublish editable basic_page content'] = array(
    'name' => 'unpublish editable basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable event content.
  $permissions['unpublish editable event content'] = array(
    'name' => 'unpublish editable event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable news content.
  $permissions['unpublish editable news content'] = array(
    'name' => 'unpublish editable news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own basic_page content.
  $permissions['unpublish own basic_page content'] = array(
    'name' => 'unpublish own basic_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own event content.
  $permissions['unpublish own event content'] = array(
    'name' => 'unpublish own event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own news content.
  $permissions['unpublish own news content'] = array(
    'name' => 'unpublish own news content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  return $permissions;
}
