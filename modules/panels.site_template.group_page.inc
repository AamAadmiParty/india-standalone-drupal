$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'site_template_panel_context_4';
$handler->task = 'site_template';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = -26;
$handler->conf = array(
  'title' => 'Group page',
  'no_blocks' => 1,
  'css_id' => 'page-wrapper',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'access' => array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'node',
        'not' => TRUE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'citizen-group/*',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  ),
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
);
$display = new panels_display();
$display->layout = 'flexible';
$display->layout_settings = array(
  'items' => array(
    'canvas' => array(
      'type' => 'row',
      'contains' => 'column',
      'children' => array(
        0 => 'main',
      ),
      'parent' => NULL,
      'class' => '',
      'column_class' => '',
      'row_class' => '',
      'region_class' => '',
      'no_scale' => FALSE,
      'fixed_width' => '',
      'column_separation' => '0.5em',
      'region_separation' => '0.5em',
      'row_separation' => '0.5em',
    ),
    'main' => array(
      'type' => 'column',
      'width' => 100,
      'width_type' => '%',
      'children' => array(
        0 => 2,
        1 => 1,
        2 => 'main-row',
        3 => 3,
        4 => 4,
      ),
      'parent' => 'canvas',
    ),
    'main-row' => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'sidebar_left',
        1 => 'content',
        2 => 'sidebar_right',
      ),
      'parent' => 'main',
      'class' => 'panels-top-row main-content',
    ),
    'content' => array(
      'type' => 'region',
      'title' => 'Content',
      'width' => '49.86621755201845',
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => 'panel-region-main-content',
    ),
    1 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'header',
      ),
      'parent' => 'main',
      'class' => 'panels-top-row header panels-row-main-menu',
    ),
    'header' => array(
      'type' => 'region',
      'title' => 'Header Menu',
      'width' => 100,
      'width_type' => '%',
      'parent' => '1',
      'class' => '',
    ),
    2 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'header_menu',
      ),
      'parent' => 'main',
      'class' => 'panels-top-row',
    ),
    'header_menu' => array(
      'type' => 'region',
      'title' => 'Header Logo',
      'width' => 100,
      'width_type' => '%',
      'parent' => '2',
      'class' => '',
    ),
    'sidebar_left' => array(
      'type' => 'region',
      'title' => 'Sidebar Left',
      'width' => '25.04272087427822',
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => 'sidebar-left-panel',
    ),
    'sidebar_right' => array(
      'type' => 'region',
      'title' => 'Sidebar Right',
      'width' => '25.091061573703595',
      'width_type' => '%',
      'parent' => 'main-row',
      'class' => 'sidebar-right-panel',
    ),
    3 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'pre_footer',
      ),
      'parent' => 'main',
      'class' => 'panels-top-row panels-row-pre-footer',
    ),
    'pre_footer' => array(
      'type' => 'region',
      'title' => 'Pre Footer',
      'width' => 100,
      'width_type' => '%',
      'parent' => '3',
      'class' => '',
    ),
    4 => array(
      'type' => 'row',
      'contains' => 'region',
      'children' => array(
        0 => 'footer_1',
        1 => 'footer',
        2 => 'footer_3',
        3 => 'footer_4',
      ),
      'parent' => 'main',
      'class' => 'panels-top-row panels-row-footer',
    ),
    'footer' => array(
      'type' => 'region',
      'title' => 'Footer 2',
      'width' => '25.11394844693572',
      'width_type' => '%',
      'parent' => '4',
      'class' => '',
    ),
    'footer_1' => array(
      'type' => 'region',
      'title' => 'Footer 1',
      'width' => '25.01441476071497',
      'width_type' => '%',
      'parent' => '4',
      'class' => '',
    ),
    'footer_3' => array(
      'type' => 'region',
      'title' => 'Footer 3',
      'width' => '24.96623308453664',
      'width_type' => '%',
      'parent' => '4',
      'class' => '',
    ),
    'footer_4' => array(
      'type' => 'region',
      'title' => 'Footer 4',
      'width' => '25.011990366190297',
      'width_type' => '%',
      'parent' => '4',
      'class' => '',
    ),
  ),
);
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'sidebar' => NULL,
    'header' => NULL,
    'header_menu' => NULL,
    'pre_footer' => NULL,
    'footer' => NULL,
    'footer_1' => NULL,
    'footer_3' => NULL,
    'footer_4' => NULL,
    'content' => NULL,
    'sidebar_left' => NULL,
    'sidebar_right' => NULL,
  ),
  'sidebar_right' => array(
    'style' => '-1',
  ),
  'sidebar_left' => array(
    'style' => '-1',
  ),
  'content' => array(
    'style' => '-1',
  ),
);
$display->cache = array();
$display->title = '';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1';
  $pane->panel = 'content';
  $pane->type = 'pane_messages';
  $pane->subtype = 'pane_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $display->content['new-1'] = $pane;
  $display->panels['content'][0] = 'new-1';
  $pane = new stdClass();
  $pane->pid = 'new-2';
  $pane->panel = 'content';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $display->content['new-2'] = $pane;
  $display->panels['content'][1] = 'new-2';
  $pane = new stdClass();
  $pane->pid = 'new-3';
  $pane->panel = 'footer';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-3'] = $pane;
  $display->panels['footer'][0] = 'new-3';
  $pane = new stdClass();
  $pane->pid = 'new-4';
  $pane->panel = 'footer_1';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-4'] = $pane;
  $display->panels['footer_1'][0] = 'new-4';
  $pane = new stdClass();
  $pane->pid = 'new-5';
  $pane->panel = 'footer_3';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-5'] = $pane;
  $display->panels['footer_3'][0] = 'new-5';
  $pane = new stdClass();
  $pane->pid = 'new-6';
  $pane->panel = 'footer_4';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-6'] = $pane;
  $display->panels['footer_4'][0] = 'new-6';
  $pane = new stdClass();
  $pane->pid = 'new-7';
  $pane->panel = 'header';
  $pane->type = 'block';
  $pane->subtype = 'superfish-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-7'] = $pane;
  $display->panels['header'][0] = 'new-7';
  $pane = new stdClass();
  $pane->pid = 'new-8';
  $pane->panel = 'header_menu';
  $pane->type = 'pane_header';
  $pane->subtype = 'pane_header';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-8'] = $pane;
  $display->panels['header_menu'][0] = 'new-8';
  $pane = new stdClass();
  $pane->pid = 'new-9';
  $pane->panel = 'sidebar_left';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(),
    'field_name' => 'og_user_node',
    'context' => 'node',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-9'] = $pane;
  $display->panels['sidebar_left'][0] = 'new-9';
  $pane = new stdClass();
  $pane->pid = 'new-10';
  $pane->panel = 'sidebar_left';
  $pane->type = 'views';
  $pane->subtype = 'content_in_a_group';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $display->content['new-10'] = $pane;
  $display->panels['sidebar_left'][1] = 'new-10';
  $pane = new stdClass();
  $pane->pid = 'new-11';
  $pane->panel = 'sidebar_left';
  $pane->type = 'panels_mini';
  $pane->subtype = 'left_sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $display->content['new-11'] = $pane;
  $display->panels['sidebar_left'][2] = 'new-11';
  $pane = new stdClass();
  $pane->pid = 'new-12';
  $pane->panel = 'sidebar_right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'right_sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $display->content['new-12'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-12';
$display->hide_title = PANELS_TITLE_PANE;
$display->title_pane = 'new-2';
$handler->conf['display'] = $display;
