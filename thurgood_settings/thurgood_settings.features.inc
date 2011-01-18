<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function thurgood_settings_imagecache_default_presets() {
  $items = array(
    'content_body' => array(
      'presetname' => 'content_body',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '640',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'large_thumb' => array(
      'presetname' => 'large_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '150',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'small_thumb' => array(
      'presetname' => 'small_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '64',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
