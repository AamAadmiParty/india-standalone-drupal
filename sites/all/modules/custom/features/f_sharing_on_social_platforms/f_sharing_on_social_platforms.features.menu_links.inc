<?php
/**
 * @file
 * f_sharing_on_social_platforms.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_sharing_on_social_platforms_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/config/services
  $menu_links['management:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
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
  // Exported menu link: management:admin/config/services/service-links
  $menu_links['management:admin/config/services/service-links'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/service-links',
    'router_path' => 'admin/config/services/service-links',
    'link_title' => 'Service Links',
    'options' => array(
      'attributes' => array(
        'title' => 'Control which and where service links should be active.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config/services',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Service Links');
  t('Web services');


  return $menu_links;
}
