<?php
/**
 * @file
 * f_selfie.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function f_selfie_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Selfies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Selfie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Selfies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_selfie_name']['id'] = 'field_selfie_name';
  $handler->display->display_options['fields']['field_selfie_name']['table'] = 'field_data_field_selfie_name';
  $handler->display->display_options['fields']['field_selfie_name']['field'] = 'field_selfie_name';
  $handler->display->display_options['fields']['field_selfie_name']['label'] = 'Uploaded By';
  $handler->display->display_options['fields']['field_selfie_name']['exclude'] = TRUE;
  /* Field: Content: Age */
  $handler->display->display_options['fields']['field_selfie_age']['id'] = 'field_selfie_age';
  $handler->display->display_options['fields']['field_selfie_age']['table'] = 'field_data_field_selfie_age';
  $handler->display->display_options['fields']['field_selfie_age']['field'] = 'field_selfie_age';
  $handler->display->display_options['fields']['field_selfie_age']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_selfie_age']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gender */
  $handler->display->display_options['fields']['field_selfie_gender']['id'] = 'field_selfie_gender';
  $handler->display->display_options['fields']['field_selfie_gender']['table'] = 'field_data_field_selfie_gender';
  $handler->display->display_options['fields']['field_selfie_gender']['field'] = 'field_selfie_gender';
  $handler->display->display_options['fields']['field_selfie_gender']['exclude'] = TRUE;
  /* Field: Content: Youtube Link */
  $handler->display->display_options['fields']['field_selfie_youtube_link']['id'] = 'field_selfie_youtube_link';
  $handler->display->display_options['fields']['field_selfie_youtube_link']['table'] = 'field_data_field_selfie_youtube_link';
  $handler->display->display_options['fields']['field_selfie_youtube_link']['field'] = 'field_selfie_youtube_link';
  $handler->display->display_options['fields']['field_selfie_youtube_link']['label'] = '';
  $handler->display->display_options['fields']['field_selfie_youtube_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_selfie_youtube_link']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_selfie_youtube_link']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_selfie_youtube_link']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'node',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'selfie' => 'selfie',
  );
  /* Filter criterion: Content: Location (field_selfie_location) */
  $handler->display->display_options['filters']['field_selfie_location_value']['id'] = 'field_selfie_location_value';
  $handler->display->display_options['filters']['field_selfie_location_value']['table'] = 'field_data_field_selfie_location';
  $handler->display->display_options['filters']['field_selfie_location_value']['field'] = 'field_selfie_location_value';
  $handler->display->display_options['filters']['field_selfie_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_selfie_location_value']['expose']['operator_id'] = 'field_selfie_location_value_op';
  $handler->display->display_options['filters']['field_selfie_location_value']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_selfie_location_value']['expose']['operator'] = 'field_selfie_location_value_op';
  $handler->display->display_options['filters']['field_selfie_location_value']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_selfie_location_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Gender (field_selfie_gender) */
  $handler->display->display_options['filters']['field_selfie_gender_value']['id'] = 'field_selfie_gender_value';
  $handler->display->display_options['filters']['field_selfie_gender_value']['table'] = 'field_data_field_selfie_gender';
  $handler->display->display_options['filters']['field_selfie_gender_value']['field'] = 'field_selfie_gender_value';
  $handler->display->display_options['filters']['field_selfie_gender_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_selfie_gender_value']['expose']['operator_id'] = 'field_selfie_gender_value_op';
  $handler->display->display_options['filters']['field_selfie_gender_value']['expose']['label'] = 'Gender';
  $handler->display->display_options['filters']['field_selfie_gender_value']['expose']['operator'] = 'field_selfie_gender_value_op';
  $handler->display->display_options['filters']['field_selfie_gender_value']['expose']['identifier'] = 'gender';
  $handler->display->display_options['filters']['field_selfie_gender_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'selfies';
  $export['Selfies'] = $view;

  return $export;
}
