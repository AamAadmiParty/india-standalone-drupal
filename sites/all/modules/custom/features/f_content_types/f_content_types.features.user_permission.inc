<?php
/**
 * @file
 * f_content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: create aap_question content.
  $permissions['create aap_question content'] = array(
    'name' => 'create aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: create videos content.
  $permissions['create videos content'] = array(
    'name' => 'create videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: create volunteer_story content.
  $permissions['create volunteer_story content'] = array(
    'name' => 'create volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any aap_question content.
  $permissions['delete any aap_question content'] = array(
    'name' => 'delete any aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any videos content.
  $permissions['delete any videos content'] = array(
    'name' => 'delete any videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any volunteer_story content.
  $permissions['delete any volunteer_story content'] = array(
    'name' => 'delete any volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own aap_question content.
  $permissions['delete own aap_question content'] = array(
    'name' => 'delete own aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own videos content.
  $permissions['delete own videos content'] = array(
    'name' => 'delete own videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own volunteer_story content.
  $permissions['delete own volunteer_story content'] = array(
    'name' => 'delete own volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any aap_question content.
  $permissions['edit any aap_question content'] = array(
    'name' => 'edit any aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any videos content.
  $permissions['edit any videos content'] = array(
    'name' => 'edit any videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any volunteer_story content.
  $permissions['edit any volunteer_story content'] = array(
    'name' => 'edit any volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own aap_question content.
  $permissions['edit own aap_question content'] = array(
    'name' => 'edit own aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own videos content.
  $permissions['edit own videos content'] = array(
    'name' => 'edit own videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own volunteer_story content.
  $permissions['edit own volunteer_story content'] = array(
    'name' => 'edit own volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: publish any aap_question content.
  $permissions['publish any aap_question content'] = array(
    'name' => 'publish any aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any videos content.
  $permissions['publish any videos content'] = array(
    'name' => 'publish any videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any volunteer_story content.
  $permissions['publish any volunteer_story content'] = array(
    'name' => 'publish any volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable aap_question content.
  $permissions['publish editable aap_question content'] = array(
    'name' => 'publish editable aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable videos content.
  $permissions['publish editable videos content'] = array(
    'name' => 'publish editable videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable volunteer_story content.
  $permissions['publish editable volunteer_story content'] = array(
    'name' => 'publish editable volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own aap_question content.
  $permissions['publish own aap_question content'] = array(
    'name' => 'publish own aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own videos content.
  $permissions['publish own videos content'] = array(
    'name' => 'publish own videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own volunteer_story content.
  $permissions['publish own volunteer_story content'] = array(
    'name' => 'publish own volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any aap_question content.
  $permissions['unpublish any aap_question content'] = array(
    'name' => 'unpublish any aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any videos content.
  $permissions['unpublish any videos content'] = array(
    'name' => 'unpublish any videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any volunteer_story content.
  $permissions['unpublish any volunteer_story content'] = array(
    'name' => 'unpublish any volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable aap_question content.
  $permissions['unpublish editable aap_question content'] = array(
    'name' => 'unpublish editable aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable videos content.
  $permissions['unpublish editable videos content'] = array(
    'name' => 'unpublish editable videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable volunteer_story content.
  $permissions['unpublish editable volunteer_story content'] = array(
    'name' => 'unpublish editable volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own aap_question content.
  $permissions['unpublish own aap_question content'] = array(
    'name' => 'unpublish own aap_question content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own videos content.
  $permissions['unpublish own videos content'] = array(
    'name' => 'unpublish own videos content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own volunteer_story content.
  $permissions['unpublish own volunteer_story content'] = array(
    'name' => 'unpublish own volunteer_story content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'publishcontent',
  );

  return $permissions;
}
