<?php

  // Purge unwanted node types.
  node_type_delete('profile');

  // Default these to not be promoted:
  variable_set('node_options_article', array(0 => 'status'));
  variable_set('node_options_event', array(0 => 'status'));
  variable_set('node_options_person', array(0 => 'status'));
  variable_set('node_options_place', array(0 => 'status'));
  variable_set('node_options_organization', array(0 => 'status'));

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

  // Field weight settings.
db_query("
INSERT INTO `variable` (`name`, `value`) VALUES
('content_extra_weights_article', 'a:7:{s:5:"title";s:2:"-5";s:10:"body_field";s:2:"-4";s:20:"revision_information";s:1:"5";s:6:"author";s:1:"4";s:7:"options";s:1:"6";s:4:"menu";s:1:"3";s:4:"path";s:1:"7";}'),
('content_extra_weights_event', 'a:7:{s:5:"title";s:2:"-5";s:10:"body_field";s:2:"-4";s:20:"revision_information";s:1:"7";s:6:"author";s:1:"8";s:7:"options";s:1:"9";s:4:"menu";s:1:"6";s:4:"path";s:2:"10";}'),
('content_extra_weights_organization', 'a:7:{s:5:"title";s:2:"-5";s:10:"body_field";s:2:"-4";s:20:"revision_information";s:1:"6";s:6:"author";s:1:"5";s:7:"options";s:1:"7";s:4:"menu";s:1:"4";s:4:"path";s:1:"8";}'),
('content_extra_weights_person', 'a:7:{s:5:"title";s:2:"-5";s:10:"body_field";s:2:"-4";s:20:"revision_information";s:1:"6";s:6:"author";s:1:"5";s:7:"options";s:1:"7";s:4:"menu";s:1:"4";s:4:"path";s:1:"8";}'),
('content_extra_weights_place', 'a:7:{s:5:"title";s:2:"-1";s:10:"body_field";s:2:"10";s:20:"revision_information";s:2:"11";s:6:"author";s:2:"12";s:7:"options";s:2:"13";s:4:"menu";s:1:"9";s:4:"path";s:2:"14";}')
");

  // Content Profile settings.
  variable_set("content_profile_use_person", 1);
  variable_set("content_profile_use_organization", 1);
?>
