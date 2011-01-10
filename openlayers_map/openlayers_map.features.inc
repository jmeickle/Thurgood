<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openlayers_map_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
}
