<?php
/**
 * @file
 * f_site_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_site_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:key-issues
  $menu_links['main-menu:key-issues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'key-issues',
    'router_path' => 'key-issues',
    'link_title' => 'Key Issues',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:opinion-polls
  $menu_links['main-menu:opinion-polls'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'opinion-polls',
    'router_path' => 'opinion-polls',
    'link_title' => 'Opinion Polls',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-footer-1:<front>
  $menu_links['menu-footer-1:<front>'] = array(
    'menu_name' => 'menu-footer-1',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'dummy1',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-footer-2:<front>
  $menu_links['menu-footer-2:<front>'] = array(
    'menu_name' => 'menu-footer-2',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'dummy2',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-footer-3:<front>
  $menu_links['menu-footer-3:<front>'] = array(
    'menu_name' => 'menu-footer-3',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'dummy3',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-footer-4:<front>
  $menu_links['menu-footer-4:<front>'] = array(
    'menu_name' => 'menu-footer-4',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'dummy4',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-how-can-you-help:http://link1.com
  $menu_links['menu-how-can-you-help:http://link1.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link1.com',
    'router_path' => '',
    'link_title' => 'Join Us',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-join-us',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-how-can-you-help:http://link2.com
  $menu_links['menu-how-can-you-help:http://link2.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link2.com',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'Donate',
        'class' => array(
          0 => 'link-donate',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-how-can-you-help:http://link3.com
  $menu_links['menu-how-can-you-help:http://link3.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link3.com',
    'router_path' => '',
    'link_title' => 'Talk To Us',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-talk-to-us',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-how-can-you-help:http://link4.com
  $menu_links['menu-how-can-you-help:http://link4.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link4.com',
    'router_path' => '',
    'link_title' => 'Spread Message',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-spread-message',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  t('Donate');
  t('Events');
  t('Home');
  t('Join Us');
  t('Key Issues');
  t('News');
  t('Opinion Polls');
  t('Spread Message');
  t('Talk To Us');
  t('dummy1');
  t('dummy2');
  t('dummy3');
  t('dummy4');


  return $menu_links;
}
