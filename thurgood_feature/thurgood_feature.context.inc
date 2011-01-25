<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function thurgood_feature_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar';
  $context->description = 'Thurgood: Node View Sidebar.';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'event' => 'event',
        'organization' => 'organization',
        'person' => 'person',
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-2' => array(
          'module' => 'quicktabs',
          'delta' => 2,
          'region' => 'right',
          'weight' => 0,
        ),
        'quicktabs-1' => array(
          'module' => 'quicktabs',
          'delta' => 1,
          'region' => 'right',
          'weight' => 1,
        ),
        'quicktabs-3' => array(
          'module' => 'quicktabs',
          'delta' => 3,
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Node View Sidebar.');
  t('thurgood');

  $export['thurgood_sidebar'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'thurgood_sidebar_search';
  $context->description = 'Thurgood: Faceted Search Sidebar';
  $context->tag = 'thurgood';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'place/search/*' => 'place/search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'faceted_search_ui-1_keyword' => array(
          'module' => 'faceted_search_ui',
          'delta' => '1_keyword',
          'region' => 'right',
          'weight' => 0,
        ),
        'faceted_search_ui-1_current' => array(
          'module' => 'faceted_search_ui',
          'delta' => '1_current',
          'region' => 'right',
          'weight' => 1,
        ),
        'faceted_search_ui-1_guided' => array(
          'module' => 'faceted_search_ui',
          'delta' => '1_guided',
          'region' => 'right',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thurgood: Faceted Search Sidebar');
  t('thurgood');

  $export['thurgood_sidebar_search'] = $context;
  return $export;
}
