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
//  	$output .=  '<p>></p>' . $target_content;
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
