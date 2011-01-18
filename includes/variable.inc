<?php

// Basic site information
variable_set('site_footer', 'Developed by the Institute for Municipal and Regional Policy at Central Connecticut State University.');
variable_set('site_frontpage', 'home');
variable_set('site_mail', 'eronarn@gmail.com');
variable_set('site_mission', 'Welcome to the test page of the Connecticut Reentry Collaborative.');
variable_set('site_name', 'Connecticut Reentry Collaborative');
variable_set('site_offline_message', 'The Connecticut Reentry Collaborative test page is currently offline.');
variable_set('site_slogan', 'If we had a slogan it would go here.');

// Core settings.
variable_set('default_nodes_main', "5");
variable_set('node_preview', "0");
variable_set('teaser_length', "200");

// Having the Search region active breaks OL Geocoder,
// so we disable it here.

variable_set('theme_settings', array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_article' => 0,
    'toggle_node_info_event' => 0,
    'toggle_node_info_place' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
));

// OpenLayers settings.
// Default preset is the same one used on the node editing page.
variable_set('openlayers_default_preset', 'thurgood_form');

// Google Maps API key. Obviously, this depends on your domain!
variable_set('openlayers_layers_google_api', 'ABQIAAAAYxy6rrenR0GtIuGHI9I35BS31JS7lLTyVkZkrmJvmWOn6proUxQh9Z_wcnDGfs4-wuC02ZFkd997uQ');

// Location of local OpenLayers.js file. Not currently used.
// variable_set(' ', 'http://ctreentry.info/OpenLayers.js');

// Date settings
variable_set('date_db_tz_support', 0);
variable_set('date_default_timezone', -14400);
variable_set('date_default_timezone_name', "America/New_York");
variable_set('date_first_day', 0);
variable_set('date_format_long', "l, F j, Y - H:i");
variable_set('date_format_medium', "D, Y-m-d H:i");
variable_set('date_format_short', "Y-m-d H:i");

// Image settings.
variable_set('imageapi_image_toolkit', "imageapi_gd");
variable_set('image_toolkit', "gd");

// Search settings.
variable_set('search_cron_limit', 200);

// Faceted Search environment settings.
$fs_env_settings = array(
    'title' => 'Resource Search',
    'ignore_status' => 1,
    'types' => array
        (
            'place' => 'place',
            'article' => 0,
            'event' => 0
        ),
    'base_path' => 'place/search',
    'start_page' => 'place/search/results',
    'results_style' => 'faceted_search_views:thurgood_search_map',
    'results_style_selective_extracts' => 0,
    'current_block' => 1,
    'keyword_block' => 1,
    'keyword_mode' => 'refine',
    'keyword_field_selector' => 0,
    'guided_block' => 1,
    'sort_block' => 0,
    'tooltips' => 1,
    'related_block' => 1,
    'related_style' => 'list_grouped'
);

  $env = new faceted_search();
  $env->name = 'thurgood_search_environment';
  $env->description = 'Thurgood: Search Environment';

  foreach ($fs_env_settings as $key => $value) {
      $env->settings[$key] = $value;
  }

  // Save to database, obtaining a new env_id if not updating an existing
  // environment.
  drupal_write_record('faceted_search_env', $env, NULL);

  $fs_env_query = "
  INSERT INTO `faceted_search_env` (`env_id`, `name`, `description`, `settings`) VALUES
  (1, 'thurgood_search_environment', 'Thurgood: Search Environment', '" . $fs_env_settings . "')
  ";

  // Faceted Search filters settings.

  $fs_filters_query = "
  INSERT INTO `faceted_search_filters` (`env_id`, `filter_key`, `filter_id`, `status`, `weight`, `sort`, `max_categories`) VALUES
  (1, 'node', 'keyword', 1, -999, '', 0),
  (1, 'taxonomy', '1', 1, 2, 'term', 0),
  (1, 'taxonomy', '2', 1, 1, 'term', 0),
  (1, 'taxonomy', '3', 1, 3, 'term', 0)
  ";

  // Queries to insert the above.
  db_query($fs_env_query);
  db_query($fs_filters_query);

  // Admin settings
  variable_set('admin_toolbar', array(
    'layout' => "horizontal",
    'position' => "sw",
    'behavior' => "df",
    'blocks' => array
        (
            'context_ui-editor' => -1,
            'context_ui-devel' => -1,
            'admin-create' => -1,
            'admin-theme' => 1,
            'admin-account' => -1,
            'admin-menu' => 1,
            'admin-devel' => -1
        )

  ));

// Admin Menu settings
variable_set('admin_menu_margin_top', 1);
variable_set('admin_menu_position_fixed', 1);
variable_set('admin_menu_tweak_modules', 1);
variable_set('admin_menu_tweak_tabs', 0);

// Vertical Tabs settings
variable_set('vertical_tabs_default', 1);
variable_set('vertical_tabs_minimum', 1);
variable_set('vertical_tabs_node_type_settings', 0);

// Pathauto settings
variable_set('pathauto_node_pattern', '[type]/[title-raw]');
variable_set('pathauto_reduce_ascii', 1);
variable_set('pathauto_update_action', "1");
variable_set('pathauto_max_bulk_update', "100");

// Contact form settings.
variable_set('contact_default_status', 0);
variable_set('contact_form_information', "Run into a bug on our site? Spot inaccurate information? Just plain don't like something and want us to know? Leave a message for the site webmaster using the contact form below.");
variable_set('contact_hourly_threshold', 3);

$contact_info = array (
    array("cid" => 1, "category" => "Feedback about site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 1),
    array("cid" => 2, "category" => "Help with using the site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
    array("cid" => 3, "category" => "Wrong information on site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
    array("cid" => 4, "category" => "Request for further information", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
);

foreach ($contact_info as $values) {
    db_query("INSERT INTO {contact} (cid, category, recipients, reply, weight, selected) VALUES ('%s', '%s', '%s', '%s', '%s', '%s')", $values);
}
?>
