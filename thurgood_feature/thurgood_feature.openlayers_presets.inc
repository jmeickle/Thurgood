<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function thurgood_feature_openlayers_presets() {
  $export = array();
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'thurgood_form';
  $openlayers_presets->title = 'Thurgood: Editing Form Map';
  $openlayers_presets->description = 'Map displayed when adding or editing content.';
  $openlayers_presets->data = array(
    'width' => '400px',
    'height' => '300px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-72.726745602562, 41.6154423233',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-8221261.012767,5005708.107441,-7977274.018525,5175704.058317',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
    ),
    'layer_styles' => array(
      'openlayers_data_test_openlayers_1' => 'default',
    ),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['thurgood_form'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'thurgood_node';
  $openlayers_presets->title = 'Thurgood: Node View Map';
  $openlayers_presets->description = 'Map displayed when viewing content.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '300px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-72.726745602562, 41.6154423233',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-8221261.012767,5005708.107441,-7977274.018525,5175704.058317',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
    ),
    'layer_styles' => array(
      'openlayers_data_test_openlayers_1' => 'default',
    ),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['thurgood_node'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'thurgood_node_test';
  $openlayers_presets->title = 'Thurgood: Node View Map Test';
  $openlayers_presets->description = 'Map displayed when viewing content.';
  $openlayers_presets->data = array(
    'width' => '200px',
    'height' => '200px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-72.677307125997, 41.697525909371',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-8221261.012767,5005708.107441,-7977274.018525,5175704.058317',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'thurgood_block_map_openlayers_1' => 'thurgood_block_map_openlayers_1',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(
      'thurgood_block_map_openlayers_1' => 'thurgood_block_map_openlayers_1',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['thurgood_node_test'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'thurgood_search';
  $openlayers_presets->title = 'Thurgood: Faceted Search Map';
  $openlayers_presets->description = 'Map displayed when searching.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-72.726745602562, 41.6154423233',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-8221261.012767,5005708.107441,-7977274.018525,5175704.058317',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'google_normal',
        'point_zoom_level' => '5',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
    ),
    'layer_styles' => array(
      'openlayers_data_test_openlayers_1' => 'default',
    ),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['thurgood_search'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'thurgood_search_2';
  $openlayers_presets->title = 'Thurgood: Faceted Search Map Test';
  $openlayers_presets->description = 'Map displayed when searching.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-72.726745602562, 41.6154423233',
        'zoom' => '8',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-8221261.012767,5005708.107441,-7977274.018525,5175704.058317',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'thurgood_search_data_openlayers_1' => 'thurgood_search_data_openlayers_1',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'thurgood_search_data_openlayers_1',
        'point_zoom_level' => '5',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'thurgood_search_data_openlayers_1' => 'thurgood_search_data_openlayers_1',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(
      'thurgood_search_data_openlayers_1' => 'thurgood_search_data_openlayers_1',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['thurgood_search_2'] = $openlayers_presets;
  return $export;
}
