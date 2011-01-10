<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function openlayers_map_openlayers_presets() {
  $export = array();
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'reentry_map';
  $openlayers_presets->title = 'Reentry Map';
  $openlayers_presets->description = 'Map for reentry assets.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
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
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(),
      ),
      'openlayers_behavior_tooltip' => array(
        'layers' => array(),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'google_satellite',
        'point_zoom_level' => '5',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'google_hybrid' => 'google_hybrid',
      'google_normal' => 'google_normal',
    ),
    'layer_styles' => array(),
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

  $export['reentry_map'] = $openlayers_presets;
  return $export;
}
