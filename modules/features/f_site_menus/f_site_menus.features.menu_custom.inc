<?php
/**
 * @file
 * f_site_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_site_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer-1.
  $menus['menu-footer-1'] = array(
    'menu_name' => 'menu-footer-1',
    'title' => 'Footer 1',
    'description' => 'this menu appears in footer at first column',
  );
  // Exported menu: menu-footer-2.
  $menus['menu-footer-2'] = array(
    'menu_name' => 'menu-footer-2',
    'title' => 'Footer 2',
    'description' => 'this menu appears in footer at second column',
  );
  // Exported menu: menu-footer-3.
  $menus['menu-footer-3'] = array(
    'menu_name' => 'menu-footer-3',
    'title' => 'Footer 3',
    'description' => 'this menu appears in footer at third column',
  );
  // Exported menu: menu-footer-4.
  $menus['menu-footer-4'] = array(
    'menu_name' => 'menu-footer-4',
    'title' => 'Footer 4',
    'description' => 'this menu appears in footer at fourth column',
  );
  // Exported menu: menu-how-can-you-help.
  $menus['menu-how-can-you-help'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'title' => 'How can you help?',
    'description' => 'How can you help?',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer 1');
  t('Footer 2');
  t('Footer 3');
  t('Footer 4');
  t('How can you help?');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('this menu appears in footer at first column');
  t('this menu appears in footer at fourth column');
  t('this menu appears in footer at second column');
  t('this menu appears in footer at third column');


  return $menus;
}
