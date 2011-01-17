<?php

  // Default these to not be promoted:
  variable_set('node_options_article', array('status'));
  variable_set('node_options_event', array('status'));
  variable_set('node_options_place', array('status'));

  // Vertical Tabs Default settings
  variable_set('vertical_tabs_default_tab_article, array("Article"));
  variable_set('vertical_tabs_default_tab_event, array("Event"));
  variable_set('vertical_tabs_default_tab_place, array("Place"));

  // Don't display date and author information for these:
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_article'] = FALSE;
  $theme_settings['toggle_node_info_event'] = FALSE;
  $theme_settings['toggle_node_info_place'] = FALSE;
  variable_set('theme_settings', $theme_settings);
?>
