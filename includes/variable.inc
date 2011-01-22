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

// Backup and Migrate settings.

// Profiles.

// Taxonomy export:
db_query("INSERT INTO `backup_migrate_profiles` (`profile_id`, `name`, `filename`, `append_timestamp`, `timestamp_format`, `filters`) VALUES
('656bfaf161991c41f388278c673f5717', 'Taxonomy', 'Reentry-Taxonomy', 1, 'Y-m-d\\TH-i-s', 'a:12:{s:11:"compression";s:4:"none";s:21:"notify_success_enable";i:1;s:20:"notify_success_email";s:17:"eronarn@gmail.com";s:21:"notify_failure_enable";i:1;s:20:"notify_failure_email";s:17:"eronarn@gmail.com";s:18:"utils_site_offline";i:1;s:26:"utils_site_offline_message";s:69:"The Connecticut Reentry Collaborative test page is currently offline.";s:14:"exclude_tables";a:127:{s:6:"access";s:6:"access";s:7:"actions";s:7:"actions";s:11:"actions_aid";s:11:"actions_aid";s:19:"advanced_help_index";s:19:"advanced_help_index";s:7:"authmap";s:7:"authmap";s:27:"backup_migrate_destinations";s:27:"backup_migrate_destinations";s:23:"backup_migrate_profiles";s:23:"backup_migrate_profiles";s:24:"backup_migrate_schedules";s:24:"backup_migrate_schedules";s:5:"batch";s:5:"batch";s:23:"better_formats_defaults";s:23:"better_formats_defaults";s:6:"blocks";s:6:"blocks";s:12:"blocks_roles";s:12:"blocks_roles";s:5:"boxes";s:5:"boxes";s:5:"cache";s:5:"cache";s:11:"cache_block";s:11:"cache_block";s:13:"cache_content";s:13:"cache_content";s:17:"cache_emfield_xml";s:17:"cache_emfield_xml";s:12:"cache_filter";s:12:"cache_filter";s:10:"cache_form";s:10:"cache_form";s:25:"cache_hierarchical_select";s:25:"cache_hierarchical_select";s:26:"cache_media_youtube_status";s:26:"cache_media_youtube_status";s:10:"cache_menu";s:10:"cache_menu";s:10:"cache_page";s:10:"cache_page";s:12:"cache_update";s:12:"cache_update";s:11:"cache_views";s:11:"cache_views";s:16:"cache_views_data";s:16:"cache_views_data";s:8:"comments";s:8:"comments";s:18:"conditional_fields";s:18:"conditional_fields";s:7:"contact";s:7:"contact";s:18:"content_field_date";s:18:"content_field_date";s:18:"content_field_document";s:18:"content_field_document";s:19:"content_field_hours";s:19:"content_field_hours";s:19:"content_field_image";s:19:"content_field_image";s:22:"content_field_location";s:22:"content_field_location";s:33:"content_field_location_additional";s:33:"content_field_location_additional";s:30:"content_field_location_address";s:30:"content_field_location_address";s:27:"content_field_location_city";s:27:"content_field_location_city";s:28:"content_field_location_state";s:28:"content_field_location_state";s:26:"content_field_location_zip";s:26:"content_field_location_zip";s:18:"content_field_email";s:18:"content_field_email";s:32:"content_field_noderef_connection";s:32:"content_field_noderef_connection";s:29:"content_field_noderef_contact";s:29:"content_field_noderef_contact";s:30:"content_field_noderef_mentions";s:30:"content_field_noderef_mentions";s:27:"content_field_noderef_place";s:27:"content_field_noderef_place";s:19:"content_field_phone";s:19:"content_field_phone";s:34:"content_field_taxonomy_populations";s:34:"content_field_taxonomy_populations";s:29:"content_field_taxonomy_region";s:29:"content_field_taxonomy_region";s:31:"content_field_taxonomy_services";s:31:"content_field_taxonomy_services";s:27:"content_field_taxonomy_tags";s:27:"content_field_taxonomy_tags";s:29:"content_field_toggle_location";s:29:"content_field_toggle_location";s:17:"content_field_url";s:17:"content_field_url";s:19:"content_field_video";s:19:"content_field_video";s:13:"content_group";s:13:"content_group";s:20:"content_group_fields";s:20:"content_group_fields";s:18:"content_node_field";s:18:"content_node_field";s:27:"content_node_field_instance";s:27:"content_node_field_instance";s:20:"content_type_article";s:20:"content_type_article";s:18:"content_type_event";s:18:"content_type_event";s:25:"content_type_organization";s:25:"content_type_organization";s:19:"content_type_person";s:19:"content_type_person";s:18:"content_type_place";s:18:"content_type_place";s:7:"context";s:7:"context";s:16:"ctools_css_cache";s:16:"ctools_css_cache";s:19:"ctools_object_cache";s:19:"ctools_object_cache";s:17:"custom_breadcrumb";s:17:"custom_breadcrumb";s:18:"date_format_locale";s:18:"date_format_locale";s:17:"date_format_types";s:17:"date_format_types";s:12:"date_formats";s:12:"date_formats";s:13:"devel_queries";s:13:"devel_queries";s:11:"devel_times";s:11:"devel_times";s:18:"faceted_search_env";s:18:"faceted_search_env";s:22:"faceted_search_filters";s:22:"faceted_search_filters";s:17:"field_indexer_map";s:17:"field_indexer_map";s:5:"files";s:5:"files";s:14:"filter_formats";s:14:"filter_formats";s:7:"filters";s:7:"filters";s:5:"flood";s:5:"flood";s:7:"history";s:7:"history";s:17:"imagecache_action";s:17:"imagecache_action";s:17:"imagecache_preset";s:17:"imagecache_preset";s:22:"media_youtube_metadata";s:22:"media_youtube_metadata";s:23:"media_youtube_node_data";s:23:"media_youtube_node_data";s:11:"menu_custom";s:11:"menu_custom";s:10:"menu_links";s:10:"menu_links";s:11:"menu_router";s:11:"menu_router";s:4:"node";s:4:"node";s:11:"node_access";s:11:"node_access";s:23:"node_comment_statistics";s:23:"node_comment_statistics";s:12:"node_counter";s:12:"node_counter";s:18:"node_import_status";s:18:"node_import_status";s:17:"node_import_tasks";s:17:"node_import_tasks";s:14:"node_revisions";s:14:"node_revisions";s:9:"node_type";s:9:"node_type";s:26:"noderelationships_settings";s:26:"noderelationships_settings";s:17:"openlayers_layers";s:17:"openlayers_layers";s:22:"openlayers_map_presets";s:22:"openlayers_map_presets";s:17:"openlayers_styles";s:17:"openlayers_styles";s:21:"page_manager_handlers";s:21:"page_manager_handlers";s:18:"page_manager_pages";s:18:"page_manager_pages";s:20:"page_manager_weights";s:20:"page_manager_weights";s:10:"page_title";s:10:"page_title";s:18:"performance_detail";s:18:"performance_detail";s:19:"performance_summary";s:19:"performance_summary";s:10:"permission";s:10:"permission";s:4:"role";s:4:"role";s:14:"search_dataset";s:14:"search_dataset";s:12:"search_index";s:12:"search_index";s:17:"search_node_links";s:17:"search_node_links";s:12:"search_total";s:12:"search_total";s:9:"semaphore";s:9:"semaphore";s:8:"sessions";s:8:"sessions";s:6:"system";s:6:"system";s:20:"taxonomy_facets_node";s:20:"taxonomy_facets_node";s:25:"taxonomy_facets_term_node";s:25:"taxonomy_facets_term_node";s:22:"taxonomy_manager_merge";s:22:"taxonomy_manager_merge";s:9:"term_node";s:9:"term_node";s:13:"term_relation";s:13:"term_relation";s:12:"term_synonym";s:12:"term_synonym";s:9:"url_alias";s:9:"url_alias";s:5:"users";s:5:"users";s:11:"users_roles";s:11:"users_roles";s:8:"variable";s:8:"variable";s:13:"views_display";s:13:"views_display";s:18:"views_object_cache";s:18:"views_object_cache";s:10:"views_view";s:10:"views_view";s:21:"vocabulary_node_types";s:21:"vocabulary_node_types";s:8:"watchdog";s:8:"watchdog";}s:13:"nodata_tables";a:15:{s:5:"cache";s:5:"cache";s:11:"cache_block";s:11:"cache_block";s:12:"cache_filter";s:12:"cache_filter";s:10:"cache_form";s:10:"cache_form";s:10:"cache_menu";s:10:"cache_menu";s:10:"cache_page";s:10:"cache_page";s:12:"cache_update";s:12:"cache_update";s:11:"cache_views";s:11:"cache_views";s:13:"devel_queries";s:13:"devel_queries";s:11:"devel_times";s:11:"devel_times";s:14:"search_dataset";s:14:"search_dataset";s:12:"search_index";s:12:"search_index";s:12:"search_total";s:12:"search_total";s:8:"sessions";s:8:"sessions";s:8:"watchdog";s:8:"watchdog";}s:17:"utils_lock_tables";i:0;s:23:"utils_disable_query_log";i:1;s:17:"exclude_filepaths";s:31:"backup_migrate\r\nimagecache\r\ncss";}')");

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

  // Faceted Search filters settings.

  $fs_filters_query = "
  INSERT INTO `faceted_search_filters` (`env_id`, `filter_key`, `filter_id`, `status`, `weight`, `sort`, `max_categories`) VALUES
(1, 'node', 'keyword', 1, -999, '', 0),
(1, 'taxonomy', '1', 1, 2, 'term', 0),
(1, 'taxonomy', '2', 1, 1, 'term', 0),
(1, 'taxonomy', '3', 1, 3, 'term', 0),
(1, 'taxonomy', '4', 1, -8, 'term', 0)
  ";

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

// Hierarchical Select settings.

$taxonomy_populations =
array
(
    'config_id' => 'content-taxonomy-field_taxonomy_populations',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'Population',
                ),

        ),

    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => ''
                ),

            'allowed_levels' => Array
                (
                    '0' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),

);

$taxonomy_region =
array 
(
    'config_id' => 'content-taxonomy-field_taxonomy_region',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'City',
                    '1' => 'Neighborhood',
                ),
        ),

    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => '',
                    '1' => '',
                ),

            'allowed_levels' => array
                (
                    '0' => 1,
                    '1' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),

);

$taxonomy_services =
array
(
    'config_id' => 'content-taxonomy-field_taxonomy_services',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'Category',
                    '1' => 'Subcategory',
                ),

        ),
    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => '',
                    '1' => '',
                ),

            'allowed_levels' => array
                (
                    '0' => 1,
                    '1' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),
);

variable_set('hs_config_content-taxonomy-field_taxonomy_populations', $taxonomy_populations);
variable_set('hs_config_content-taxonomy-field_taxonomy_region', $taxonomy_region);
variable_set('hs_config_content-taxonomy-field_taxonomy_services', $taxonomy_services);

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
