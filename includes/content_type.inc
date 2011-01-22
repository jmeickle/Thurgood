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
  // Looks like Strongarm might take care of this?
/**
$article = 
array
(
    'title' => -5,
    'body_field' => -4,
    'revision_information' => 5,
    'author' => 4,
    'options' => 6,
    'menu' => 3,
    'path' => 7,
);

$event =
array
(
    'title' => -5,
    'body_field' => -4,
    'revision_information' => 7,
    'author' => 8,
    'options' => 9,
    'menu' => 6,
    'path' => 10,
);

$organization =
array
(
    'title' => -5,
    'body_field' => -4,
    'revision_information' => 6,
    'author' => 5,
    'options' => 7,
    'menu' => 4,
    'path' => 8,
);

$person =
array
(
    'title' => -5,
    'body_field' => -4,
    'revision_information' => 6,
    'author' => 5,
    'options' => 7,
    'menu' => 4,
    'path' => 8,
);

$place = 
array
(
    'title' => -1,
    'body_field' => 10,
    'revision_information' => 11,
    'author' => 12,
    'options' => 13,
    'menu' => 9,
    'path' => 14,
);

  variable_set('content_extra_weights_article', $article);
  variable_set('content_extra_weights_event', $event);
  variable_set('content_extra_weights_organization', $organization);
  variable_set('content_extra_weights_person', $person);
  variable_set('content_extra_weights_place', $place);
**/
  // Content Profile settings.
  variable_set("content_profile_use_person", 1);
  variable_set("content_profile_use_organization", 1);
?>
