<?php
/**
 * @file
 * f_theme_layout.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function f_theme_layout_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_1',
          1 => 'footer_2',
          2 => 'center',
          3 => 'footer_3',
        ),
        'parent' => 'main',
        'class' => 'aap-footer-top-class',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Footer 3',
        'width' => '25.087966588981615',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
      ),
      'footer_2' => array(
        'type' => 'region',
        'title' => 'Footer 2',
        'width' => '25.172366212815493',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'footer_3' => array(
        'type' => 'region',
        'title' => 'Footer 4',
        'width' => '24.481111972151375',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'footer_1' => array(
        'type' => 'region',
        'title' => 'Footer 1',
        'width' => '25.258555226051513',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'footer_2' => NULL,
      'footer_3' => NULL,
      'footer_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-contact-us-footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contact Us',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'footer_1';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Donation Links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['footer_1'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'footer_2';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Media',
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
    $display->panels['footer_2'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'footer_3';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Get in Touch',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-contact-form-class',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['footer_3'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'footer_3';
    $pane->type = 'apachesolr_form';
    $pane->subtype = 'apachesolr_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path_type' => 'custom',
      'path' => 'search/site',
      'override_prompt' => 0,
      'prompt' => '',
      'show_keys' => 1,
      'override_title' => 1,
      'override_title_text' => 'Search',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['footer_3'][1] = 'new-5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_bottom';
  $mini->category = '';
  $mini->admin_title = 'footer bottom';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'copyright',
        ),
        'parent' => 'main',
        'class' => 'aap-footer-bottom-class',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '60.14265859399663',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'social-connector-region',
      ),
      'copyright' => array(
        'type' => 'region',
        'title' => 'Copyright',
        'width' => '39.85734140600337',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'aap-copyright-class',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'survey',
        ),
        'parent' => 'main',
        'class' => 'survey-row',
      ),
      'survey' => array(
        'type' => 'region',
        'title' => 'Survey',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'survey',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'copyright' => NULL,
      'survey' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social-connectors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Connect with us on',
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
    $display->panels['center'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'copyright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Copyright Message',
      'title' => '',
      'body' => '<div class="copyright-content"><p>© 2012-2014 Aam Aadmi Party. All Rights Reserved.</p><p><a href="http://drupal.org" target="_blank">Drupal</a> powered site, built and maintained by <a href="http://www.innoraft.com/" target="_blank">Innoraft</a>.</p></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-copyright-class',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['copyright'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'survey';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 9,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'embedded survey',
      'title' => '',
      'body' => '<div id="surveyMonkeyInfo"><!doctype html>
<style type="text/css">@font-face {
    font-family: \'gotham_boldregular\';
    src:url(fonts/gotham-bold-webfont.eot);
    src: url(fonts/gotham-bold-webfont.eot?#iefix) format(\'embedded-opentype\'),
         url(fonts/gotham-bold-webfont.woff) format(\'woff\'),
         url(fonts/gotham-bold-webfont.ttf) format(\'truetype\'),
         url(fonts/gotham-bold-webfont.svg#gotham_boldregular) format(\'svg\');
    font-weight: normal;
    font-style: normal;

}

@font-face {
    font-family: \'gotham_mediumregular\';
    src: url(fonts/gotham-medium-webfont.eot);
    src: url(fonts/gotham-medium-webfont.eot?#iefix) format(\'embedded-opentype\'),
         url(fonts/gotham-medium-webfont.woff) format(\'woff\'),
         url(fonts/gotham-medium-webfont.ttf) format(\'truetype\'),
         url(fonts/gotham-medium-webfont.svg#gotham_mediumregular) format(\'svg\');
    font-weight: normal;
    font-style: normal;

}
</style>
<div style="width:1000px;height:404px;background:url(http://www.aamaadmiparty.org/sites/default/files/bg.jpg) no-repeat top center;position:relative"><div style="margin:20px 0;float:left;font-family: \'gotham_boldregular\';color:#ffffff;width:400px;text-align:center;padding-top:70px"><h2>Change begins with YOU!</h2><p style="color:#ffffff;">There is only one person who can change the destiny of this nation. And that is you! Help us fight this election with clean white money.</p><a href="https://donate.aamaadmiparty.org/?utm_source=Interstitial-Banner&amp;utm_medium=undefined&amp;utm_term=undefined&amp;utm_content=undefined&amp;utm_campaign=Interstitial-Banner28-Feb" style="text-decoration:none;padding:10px;background-color:#ca2129;color:#fff;margin-top:28px;text-transform:uppercase;display:inline-block">Donate Now</a></div>
<div style="clear:both">&nbsp;</div></div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'donate',
      'css_class' => 'surveymonkey-drupal-popup',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['survey'][0] = 'new-8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_bottom'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = '';
  $mini->admin_title = 'Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_logo',
          1 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header Content',
        'width' => '49.73301528218164',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'aap-header-search-class',
      ),
      'header_logo' => array(
        'type' => 'region',
        'title' => 'Header Logo',
        'width' => '50.26698471781836',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header_logo' => NULL,
      'header_menu' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'domain_switcher-aap_domain_switcher';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-domain-switcher-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['center'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Header Contact, Donate Buttons',
      'title' => '',
      'body' => '<p><a class="header-donate-button header-button" href="https://donate.aamaadmiparty.org/" target="_blank" title="Make a Donation">Donate</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-header-buttons clearfix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['center'][1] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'aap-search-class',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['center'][2] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'header_logo';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['header_logo'][0] = 'new-12';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header_menu';
  $mini->category = '';
  $mini->admin_title = 'Header Menu';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'superfish-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['center'][0] = 'new-13';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-13';
  $mini->display = $display;
  $export['header_menu'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'right_navigation';
  $mini->category = '';
  $mini->admin_title = 'Right Navigation';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-right-navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'right-navigation-class',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['center'][0] = 'new-14';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-14';
  $mini->display = $display;
  $export['right_navigation'] = $mini;

  return $export;
}
