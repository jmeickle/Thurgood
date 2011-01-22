<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function thurgood_test_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function thurgood_test_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'module' => 'features',
      'description' => t('An <i>Article</i> is a generic piece of website content, such as a news item or a blog post.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '25',
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('An <em>Event</em> occurs at specific time and place. It can be a one-off gathering, or a regularly scheduled meeting.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '25',
      'help' => '',
    ),
    'organization' => array(
      'name' => t('Organization'),
      'module' => 'features',
      'description' => t('Filler'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Filler'),
    ),
    'person' => array(
      'name' => t('Person'),
      'module' => 'features',
      'description' => t('Filler'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Filler'),
    ),
    'place' => array(
      'name' => t('Place'),
      'module' => 'features',
      'description' => t('A <b>Place</b> is a physical location, such as an office or a church.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '25',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function thurgood_test_views_api() {
  return array(
    'api' => '2',
  );
}
