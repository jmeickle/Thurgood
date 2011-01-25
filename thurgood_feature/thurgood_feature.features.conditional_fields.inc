<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function thurgood_feature_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_address',
  'type' => 'event',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_additional',
  'type' => 'event',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_city',
  'type' => 'event',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_state',
  'type' => 'event',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_noderef_place',
  'type' => 'event',
  'trigger_values' => 
  array (
    0 => '0',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location',
  'type' => 'event',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_zip',
  'type' => 'event',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_address',
  'type' => 'organization',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_additional',
  'type' => 'organization',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_city',
  'type' => 'organization',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_state',
  'type' => 'organization',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_zip',
  'type' => 'organization',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location',
  'type' => 'organization',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_noderef_place',
  'type' => 'organization',
  'trigger_values' => 
  array (
    0 => '0',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_address',
  'type' => 'person',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_additional',
  'type' => 'person',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_city',
  'type' => 'person',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_state',
  'type' => 'person',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location_zip',
  'type' => 'person',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_location',
  'type' => 'person',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_toggle_location',
  'field_name' => 'field_noderef_place',
  'type' => 'person',
  'trigger_values' => 
  array (
    0 => '0',
  ),
);
return $items;
}
