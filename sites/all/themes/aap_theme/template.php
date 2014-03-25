<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Omega Subtheme theme.
 */
/**
 * Override of theme_breadcrumb().
 */
/**
 * Override of theme_breadcrumb().
 */
function aap_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $page_node = menu_get_object();
  $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
  $output .= '<div class="breadcrumb">' . implode(' <p>></p> ', $breadcrumb);
  if (!empty($breadcrumb)) {
  if (!empty($page_node)) {
  	$target = current_path();
  	$target_text = substr($page_node->title, 0,50) . '...';
  	$target_link = l($target_text , drupal_get_path_alias($target));
  	$content = $page_node->type;
  	$target_content = l($content, drupal_get_path_alias($content));
 //	$output .=  '<p>></p>' . $target_content;
  	$output .=  '<p>></p>' . $target_link;
  }
  else {
  	$target = current_path();
  	$path_alias  = drupal_get_path_alias($target);
  	$target_link = l(drupal_get_path_alias($target), drupal_get_path_alias($target));
  	$output .=  '<p>></p>' . $target_link;
  }
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.

    $output .= '</div>';
    return $output;
  }
}

/**
 * Preprocesses the wrapping HTML.
 *
 * @param array &$variables
 *   Template variables.
 */
function aap_theme_preprocess_html(&$vars) {
  if ($vars['is_front']) {
    $handheld = array(
    '#tag' => 'link', // The #tag is the html tag - <link />
    '#attributes' => array( // Set up an array of attributes inside the tag
      'href' => 'http://m.aamaadmiparty.org',
      'rel' => 'alternate',
      'media' => 'handheld',
      ),
    );
  //Add header for redirecting site mobile view, when opened in mobile
  drupal_add_html_head($handheld, 'handheld');
  }
}

/**
 * Implements theme_link().
 */
function aap_theme_link(&$variables) {
  if (isset($variables['options']) && isset($variables['options']['attributes']) && isset($variables['options']['attributes']['id']) && $variables['options']['attributes']['id'] == 'logo') {
    global $base_url;
    $_domain = domain_get_domain();
    $fid = domain_custom_pane_batch_lookup_logo($_domain);
    // if there is a valid fid for the image.
    if (!empty($fid)) {
      $file = file_load($fid);
      $logo = file_create_url($file->uri);
    }
    // get theme default logo if no explicit logo defined.
    else {
      $logo = theme_get_setting('logo');
    }
    $variables['text'] = '<img src="' . $logo . '" alt="Home" height=47px />';
  }
  return '<a href="' . check_plain(url($variables['path'], $variables['options'])) . '"' . drupal_attributes($variables['options']['attributes']) . '>' . ($variables['options']['html'] ? $variables['text'] : check_plain($variables['text'])) . '</a>';
}

