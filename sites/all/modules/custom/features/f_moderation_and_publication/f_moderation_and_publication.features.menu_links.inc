<?php
/**
 * @file
 * f_moderation_and_publication.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_moderation_and_publication_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/config/workbench
  $menu_links['management:admin/config/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench',
    'router_path' => 'admin/config/workbench',
    'link_title' => 'Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'Workbench',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Exported menu link: management:admin/config/workbench/access
  $menu_links['management:admin/config/workbench/access'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench/access',
    'router_path' => 'admin/config/workbench/access',
    'link_title' => 'Workbench Access',
    'options' => array(
      'attributes' => array(
        'title' => 'Workbench access control settings',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/workbench',
  );
  // Exported menu link: management:admin/config/workbench/moderation
  $menu_links['management:admin/config/workbench/moderation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workbench/moderation',
    'router_path' => 'admin/config/workbench/moderation',
    'link_title' => 'Workbench Moderation',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure content moderation.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/workbench',
  );
  // Exported menu link: management:admin/workbench
  $menu_links['management:admin/workbench'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'title' => 'My Workbench area',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Workbench');
  t('Workbench');
  t('Workbench Access');
  t('Workbench Moderation');


  return $menu_links;
}
