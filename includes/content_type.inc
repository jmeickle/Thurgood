<?php

  // Purge unwanted node types.
  node_type_delete('profile');

  // Default these to not be promoted:
  variable_set('node_options_article', array(0, 'status'));
  variable_set('node_options_event', array(0, 'status'));
  variable_set('node_options_place', array(0, 'status'));

  // Disable uploads.
  // Commented out because we're not currently using upload.module.
/**
  variable_set('upload_article', "0");
  variable_set('upload_event', "0");
  variable_set('upload_place', "0");
**/

  // Vertical Tabs Default settings
  variable_set('vertical_tabs_default_tab_article, "Article");
  variable_set('vertical_tabs_default_tab_event, "Event");
  variable_set('vertical_tabs_default_tab_place, "Place");

  // Don't display date and author information for these:
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_article'] = FALSE;
  $theme_settings['toggle_node_info_event'] = FALSE;
  $theme_settings['toggle_node_info_place'] = FALSE;
  variable_set('theme_settings', $theme_settings);
?>
