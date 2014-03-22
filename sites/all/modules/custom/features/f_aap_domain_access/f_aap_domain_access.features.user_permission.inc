<?php
/**
 * @file
 * f_aap_domain_access.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_aap_domain_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: access domain navigation.
  $permissions['access domain navigation'] = array(
    'name' => 'access domain navigation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'domain_nav',
  );

  // Exported permission: access domain settings form.
  $permissions['access domain settings form'] = array(
    'name' => 'access domain settings form',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'domain_settings',
  );

  // Exported permission: access inactive domains.
  $permissions['access inactive domains'] = array(
    'name' => 'access inactive domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Author' => 'All Domains Author',
    ),
    'module' => 'domain',
  );

  // Exported permission: access the domain content page.
  $permissions['access the domain content page'] = array(
    'name' => 'access the domain content page',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: administer domains.
  $permissions['administer domains'] = array(
    'name' => 'administer domains',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: assign domain editors.
  $permissions['assign domain editors'] = array(
    'name' => 'assign domain editors',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: create aap_newsletter content on assigned domains.
  $permissions['create aap_newsletter content on assigned domains'] = array(
    'name' => 'create aap_newsletter content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: create aap_question content on assigned domains.
  $permissions['create aap_question content on assigned domains'] = array(
    'name' => 'create aap_question content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: create basic_page content on assigned domains.
  $permissions['create basic_page content on assigned domains'] = array(
    'name' => 'create basic_page content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'domain',
  );

  // Exported permission: create blog content on assigned domains.
  $permissions['create blog content on assigned domains'] = array(
    'name' => 'create blog content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'domain',
  );

  // Exported permission: create ct_candidate_details content on assigned domains.
  $permissions['create ct_candidate_details content on assigned domains'] = array(
    'name' => 'create ct_candidate_details content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'domain',
  );

  // Exported permission: create event content on assigned domains.
  $permissions['create event content on assigned domains'] = array(
    'name' => 'create event content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'domain',
  );

  // Exported permission: create group content on assigned domains.
  $permissions['create group content on assigned domains'] = array(
    'name' => 'create group content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: create map_data content on assigned domains.
  $permissions['create map_data content on assigned domains'] = array(
    'name' => 'create map_data content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: create news content on assigned domains.
  $permissions['create news content on assigned domains'] = array(
    'name' => 'create news content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
      'State Domains Author' => 'State Domains Author',
    ),
    'module' => 'domain',
  );

  // Exported permission: create poll content on assigned domains.
  $permissions['create poll content on assigned domains'] = array(
    'name' => 'create poll content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: create videos content on assigned domains.
  $permissions['create videos content on assigned domains'] = array(
    'name' => 'create videos content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: create volunteer_story content on assigned domains.
  $permissions['create volunteer_story content on assigned domains'] = array(
    'name' => 'create volunteer_story content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete aap_newsletter content on assigned domains.
  $permissions['delete aap_newsletter content on assigned domains'] = array(
    'name' => 'delete aap_newsletter content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete aap_question content on assigned domains.
  $permissions['delete aap_question content on assigned domains'] = array(
    'name' => 'delete aap_question content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete basic_page content on assigned domains.
  $permissions['delete basic_page content on assigned domains'] = array(
    'name' => 'delete basic_page content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete blog content on assigned domains.
  $permissions['delete blog content on assigned domains'] = array(
    'name' => 'delete blog content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete ct_candidate_details content on assigned domains.
  $permissions['delete ct_candidate_details content on assigned domains'] = array(
    'name' => 'delete ct_candidate_details content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete domain content.
  $permissions['delete domain content'] = array(
    'name' => 'delete domain content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete event content on assigned domains.
  $permissions['delete event content on assigned domains'] = array(
    'name' => 'delete event content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete group content on assigned domains.
  $permissions['delete group content on assigned domains'] = array(
    'name' => 'delete group content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete map_data content on assigned domains.
  $permissions['delete map_data content on assigned domains'] = array(
    'name' => 'delete map_data content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete news content on assigned domains.
  $permissions['delete news content on assigned domains'] = array(
    'name' => 'delete news content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete poll content on assigned domains.
  $permissions['delete poll content on assigned domains'] = array(
    'name' => 'delete poll content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete videos content on assigned domains.
  $permissions['delete videos content on assigned domains'] = array(
    'name' => 'delete videos content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete volunteer_story content on assigned domains.
  $permissions['delete volunteer_story content on assigned domains'] = array(
    'name' => 'delete volunteer_story content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: edit domain content.
  $permissions['edit domain content'] = array(
    'name' => 'edit domain content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: publish from assigned domain.
  $permissions['publish from assigned domain'] = array(
    'name' => 'publish from assigned domain',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: publish from default domain.
  $permissions['publish from default domain'] = array(
    'name' => 'publish from default domain',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: publish to any assigned domain.
  $permissions['publish to any assigned domain'] = array(
    'name' => 'publish to any assigned domain',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: review content for all domains.
  $permissions['review content for all domains'] = array(
    'name' => 'review content for all domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'All Domains Author' => 'All Domains Author',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: set domain access.
  $permissions['set domain access'] = array(
    'name' => 'set domain access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update aap_newsletter content on assigned domains.
  $permissions['update aap_newsletter content on assigned domains'] = array(
    'name' => 'update aap_newsletter content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update aap_question content on assigned domains.
  $permissions['update aap_question content on assigned domains'] = array(
    'name' => 'update aap_question content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update basic_page content on assigned domains.
  $permissions['update basic_page content on assigned domains'] = array(
    'name' => 'update basic_page content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update blog content on assigned domains.
  $permissions['update blog content on assigned domains'] = array(
    'name' => 'update blog content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update ct_candidate_details content on assigned domains.
  $permissions['update ct_candidate_details content on assigned domains'] = array(
    'name' => 'update ct_candidate_details content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update event content on assigned domains.
  $permissions['update event content on assigned domains'] = array(
    'name' => 'update event content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update group content on assigned domains.
  $permissions['update group content on assigned domains'] = array(
    'name' => 'update group content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update map_data content on assigned domains.
  $permissions['update map_data content on assigned domains'] = array(
    'name' => 'update map_data content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update news content on assigned domains.
  $permissions['update news content on assigned domains'] = array(
    'name' => 'update news content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update poll content on assigned domains.
  $permissions['update poll content on assigned domains'] = array(
    'name' => 'update poll content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update videos content on assigned domains.
  $permissions['update videos content on assigned domains'] = array(
    'name' => 'update videos content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: update volunteer_story content on assigned domains.
  $permissions['update volunteer_story content on assigned domains'] = array(
    'name' => 'update volunteer_story content on assigned domains',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
    ),
    'module' => 'domain',
  );

  // Exported permission: view unpublished domain content.
  $permissions['view unpublished domain content'] = array(
    'name' => 'view unpublished domain content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'All Domains Approver' => 'All Domains Approver',
      'State Domains Approver' => 'State Domains Approver',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
