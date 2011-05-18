<?php

  // Purge unwanted node types.
  node_type_delete('profile');

  // These have multiple settings:
  variable_set('node_options_article', array(0 => 'status', 1 => "revision", 2 => "revision_moderation"));
  variable_set('node_options_event', array(0 => 'status', 1 => "revision", 2 => "revision_moderation"));
  variable_set('node_options_place', array(0 => 'status', 1 => "revision", 2 => "revision_moderation"));

  // Default these to just not be promoted:
  variable_set('node_options_organization', array(0 => 'status'));
  variable_set('node_options_person', array(0 => 'status'));

  // Vertical Tabs Default settings
  variable_set('vertical_tabs_default_tab_article', "Basic details");
  variable_set('vertical_tabs_default_tab_event', "Basic details");
  variable_set('vertical_tabs_default_tab_person', "Basic details");
  variable_set('vertical_tabs_default_tab_place', "Basic details");
  variable_set('vertical_tabs_default_tab_organization', "Basic details");

  // Don't display date and author information for these:
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_article'] = FALSE;
  $theme_settings['toggle_node_info_event'] = FALSE;
  $theme_settings['toggle_node_info_person'] = FALSE;
  $theme_settings['toggle_node_info_place'] = FALSE;
  $theme_settings['toggle_node_info_organization'] = FALSE;
  variable_set('theme_settings', $theme_settings);

  // Some revision/diff/etc. settings.
  variable_set('enable_revisions_page_article', 1);
  variable_set('enable_revisions_page_event', 1);
  variable_set('enable_revisions_page_place', 1);

  variable_set('show_preview_changes_article', 1);
  variable_set('show_preview_changes_event', 1);
  variable_set('show_preview_changes_place', 1);

  variable_set('new_revisions_article', "0");
  variable_set('new_revisions_event', "0");
  variable_set('new_revisions_place', "0");

  variable_set('revisioning_auto_publish_article', 0);
  variable_set('revisioning_auto_publish_event', 0);
  variable_set('revisioning_auto_publish_place', 0);

  // Content Profile settings.
  variable_set("content_profile_use_person", 1);
  variable_set("content_profile_use_organization", 1);

  variable_set('content_profile_person', 'a:5:{s:6:"weight";s:1:"0";s:12:"user_display";s:1:"0";s:9:"edit_link";i:0;s:8:"edit_tab";s:3:"top";s:8:"add_link";i:1;}');
  variable_set('content_profile_organization', 'a:5:{s:6:"weight";s:1:"0";s:12:"user_display";s:1:"0";s:9:"edit_link";i:0;s:8:"edit_tab";s:3:"top";s:8:"add_link";i:1;}');
?>
