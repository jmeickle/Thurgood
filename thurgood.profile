<?php

// This installation profile is based on the work of Fuse Interactive.
// http://fuseinteractive.ca/blog/getting-started-drupal-install-profiles

// It also draws upon Open Atrium's profile.

function thurgood_profile_details() {
    return array(
        'name' => 'Thurgood',
        'description' => 'Installation profile for Thurgood.',
    );
}
 
/**
 * Return an array of the modules to be enabled when this profile is installed.
 *
 * @return
 *  An array of modules to be enabled.
 */
function thurgood_profile_modules() {
  return array(
    // Enable required core modules first.
    'block',
    'filter',
    'node',
    'system',
    'user',

    // Enable optional core modules next.
//    'comment',
    'dblog',
    'help',
    'menu',
    'path',
    'search',
    'taxonomy',
    'upload',
  
    // The rest are contrib modules, sorted by makefile:

    // admin.make
    'backup_migrate',
    'backup_migrate_files',
    'devel',
    'performance',
    'googleanalytics',
    'node_import',
//    'strongarm', // Installed later because it depends on Ctools.

    // basic.make
    'content_profile',
    'content_profile_tokens',
    'content_profile_registration',
//    'context', // Installed later because they depend on Ctools.
//    'context_layouts',
//    'context_ui',
    'ctools',
    'page_manager',
    'date',
    'date_api',
    'date_popup',
    'date_repeat',
    'date_timezone',
    'date_tools',
//    'modalframe', // Installed later because it depends on Jquery.
    'token',
    'transliteration',
    'imageapi',
    'imageapi_gd',
    'imagecache',
    'imagecache_ui',
    'pngfix',

    // cck.make
    'content',
    'content_copy',
    'content_taxonomy',
    'content_taxonomy_autocomplete',
    'content_taxonomy_options',
    'content_taxonomy_tree',
    'email',
    'fieldgroup',
    'filefield',
    'imagefield',
    'link',
    'nodereference',
    'noderelationships',
    'number',
    'optionwidgets',
//    'reverse_node_reference', // Installed later because it depends on db_version.
    'text',
    'userreference',

    // geo.make
    'openlayers',
    'openlayers_cck',
    'openlayers_ui',
    'openlayers_views',

    // (STUB) panels.make

    // search.make
    'faceted_search',
    'faceted_search_ui',
    'faceted_search_views',
    'field_keyword_filter',
    'taxonomy_facets',
    'field_indexer',
    'cck_field_indexer',
    'node_field_indexer',
    'porterstemmer',

    // seo.make
//    'nodewords_admin',
//    'nodewords_basic',
//    'nodewords',
    'pathauto',
    'page_title',
//    'xmlsitemap',

    // ui.make
    'admin',
    'admin_menu',
    'advanced_help',
    'better_formats',
    'custom_breadcrumbs',
    'hierarchical_select',
    'hs_content_taxonomy',
    'hs_taxonomy',
    'logintoboggan',
    'nrembrowser',
    'taxonomy_manager',
    'vertical_tabs',
    'jquery_ui',
    'jquery_ui_dialog',

    // views.make
    'views',
    'views_customfield',
    'views_export',
    'views_or',
    'views_ui',
    'views_rss',

    // (STUB) workflow.make
    // (STUB) wysiwyg.make
  );
}
 
/**
 * Reimplementation of system_theme_data(). The core function's static cache
 * is populated during install prior to active install profile awareness.
 * This workaround makes enabling themes in profiles/[profile]/themes possible.
 */
function _thurgood_system_theme_data() {
  global $profile;
  $profile = 'thurgood';
 
  $themes = drupal_system_listing('\.info$', 'themes');
  $engines = drupal_system_listing('\.engine$', 'themes/engines');
 
  $defaults = system_theme_default();
 
  $sub_themes = array();
  foreach ($themes as $key => $theme) {
    $themes[$key]->info = drupal_parse_info_file($theme->filename) + $defaults;
 
    if (!empty($themes[$key]->info['base theme'])) {
      $sub_themes[] = $key;
    }
 
    $engine = $themes[$key]->info['engine'];
    if (isset($engines[$engine])) {
      $themes[$key]->owner = $engines[$engine]->filename;
      $themes[$key]->prefix = $engines[$engine]->name;
      $themes[$key]->template = TRUE;
    }
 
    // Give the stylesheets proper path information.
    $pathed_stylesheets = array();
    foreach ($themes[$key]->info['stylesheets'] as $media => $stylesheets) {
      foreach ($stylesheets as $stylesheet) {
        $pathed_stylesheets[$media][$stylesheet] = dirname($themes[$key]->filename) .'/'. $stylesheet;
      }
    }
    $themes[$key]->info['stylesheets'] = $pathed_stylesheets;
 
    // Give the scripts proper path information.
    $scripts = array();
    foreach ($themes[$key]->info['scripts'] as $script) {
      $scripts[$script] = dirname($themes[$key]->filename) .'/'. $script;
    }
    $themes[$key]->info['scripts'] = $scripts;
 
    // Give the screenshot proper path information.
    if (!empty($themes[$key]->info['screenshot'])) {
      $themes[$key]->info['screenshot'] = dirname($themes[$key]->filename) .'/'. $themes[$key]->info['screenshot'];
    }
  }
 
  foreach ($sub_themes as $key) {
    $themes[$key]->base_themes = system_find_base_themes($themes, $key);
    // Don't proceed if there was a problem with the root base theme.
    if (!current($themes[$key]->base_themes)) {
      continue;
    }
    $base_key = key($themes[$key]->base_themes);
    foreach (array_keys($themes[$key]->base_themes) as $base_theme) {
      $themes[$base_theme]->sub_themes[$key] = $themes[$key]->info['name'];
    }
    // Copy the 'owner' and 'engine' over if the top level theme uses a
    // theme engine.
    if (isset($themes[$base_key]->owner)) {
      if (isset($themes[$base_key]->info['engine'])) {
        $themes[$key]->info['engine'] = $themes[$base_key]->info['engine'];
        $themes[$key]->owner = $themes[$base_key]->owner;
        $themes[$key]->prefix = $themes[$base_key]->prefix;
      }
      else {
        $themes[$key]->prefix = $key;
      }
    }
  }
 
  // Extract current files from database.
  system_get_files_database($themes, 'theme');
  db_query("DELETE FROM {system} WHERE type = 'theme'");
  foreach ($themes as $theme) {
    $theme->owner = !isset($theme->owner) ? '' : $theme->owner;
    db_query("INSERT INTO {system} (name, owner, info, type, filename, status, throttle, bootstrap) VALUES ('%s', '%s', '%s', '%s', '%s', %d, %d, %d)", $theme->name, $theme->owner, serialize($theme->info), 'theme', $theme->filename, isset($theme->status) ? $theme->status : 0, 0, 0);
  }
}
 
 
/**
 * Implementation of hook_profile_tasks().
 */
function thurgood_profile_tasks(&$task, $url) {

    // First, we need to enable some modules that would break the normal install hook.
    module_enable(array('strongarm', 'modalframe', 'reverse_node_reference', 'context', 'context_layouts', 'context_ui'));

    // The actual settings are managed by includes:
    set_include_path('./includes');

    //require(content_types.inc);

// Insert default user-defined node types into the database.
  $types = array(
    array(
      'type' => 'page',
      'name' => t('Page'),
      'module' => 'node',
      'description' => t('If you want to add a static page, like a contact page or an about page, use a page.'),
      'custom' => TRUE,
      'modified' => TRUE,
      'locked' => FALSE,
    ),
  );
 
  foreach ($types as $type) {
    $type = (object) _node_type_set_defaults($type);
    node_type_save($type);
  }
 
  // Default page to not be promoted and have comments disabled.
  variable_set('node_options_page', array('status'));
  variable_set('comment_page', COMMENT_NODE_DISABLED);
 
  // Don't display date and author information for page nodes by default.
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_page'] = FALSE;
  variable_set('theme_settings', $theme_settings);

/**
function cws_d6_profile_enable_northtexas_theme() {
  install_disable_theme('garland');
  install_default_theme('northtexas');
}

function cws_d6_profile_configure_blocks() {
  install_init_blocks();
 
  $body = 'University of North Texas<br />1155 Union Circle #311277<br />Denton, Texas';
  $description = 'Physical Address';
  $physadd_delta = install_create_custom_block($body, $description);
  install_set_block('block', $physadd_delta, 'northtexas', 'physicaladd', 0);
}
**/ 
  // Clear caches.
  drupal_flush_all_caches();
/**
  // Enable the right theme. This must be handled after drupal_flush_all_caches()
  // which rebuilds the system table based on a stale static cache,
  // blowing away our changes.
  _thurgood_system_theme_data();
  db_query("UPDATE {system} SET status = 0 WHERE type = 'theme'");
  db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' AND name = 'fusebasic'");
  db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' AND name = 'rubik'");
  db_query("UPDATE {blocks} SET region = '' WHERE theme = 'fusebasic'");
  variable_set('theme_default', 'fusebasic');
  variable_set('admin_theme', 'rubik');
  variable_set('node_admin_theme', 1);
**/ 
  // Set default WYSIWYG settings
  db_query('INSERT INTO {wysiwyg} VALUES (1,\'\',NULL),(2,\'ckeditor\',\'a:20:{s:7:"default";i:1;s:11:"user_choose";i:0;s:11:"show_toggle";i:1;s:5:"theme";s:8:"advanced";s:8:"language";s:2:"en";s:7:"buttons";a:2:{s:7:"default";a:2:{s:4:"Bold";i:1;s:5:"Image";i:1;}s:4:"imce";a:1:{s:4:"imce";i:1;}}s:11:"toolbar_loc";s:3:"top";s:13:"toolbar_align";s:4:"left";s:8:"path_loc";s:6:"bottom";s:8:"resizing";i:1;s:11:"verify_html";i:1;s:12:"preformatted";i:0;s:22:"convert_fonts_to_spans";i:1;s:17:"remove_linebreaks";i:1;s:23:"apply_source_formatting";i:0;s:27:"paste_auto_cleanup_on_paste";i:0;s:13:"block_formats";s:32:"p,address,pre,h2,h3,h4,h5,h6,div";s:11:"css_setting";s:5:"theme";s:8:"css_path";s:0:"";s:11:"css_classes";s:0:"";}\')');
  
  // Set default input format to Full HTML
  variable_set('filter_default_format', '2');
 
  // Enable vertical tabs on node type settings page
  variable_set('vertical_tabs_default', 1);
  variable_set('vertical_tabs_minimum', '1');
  variable_set('vertical_tabs_node_type_settings', 1);
 
 
  // Pathauto default path
  variable_set('pathauto_node_pattern', '[title-raw]');
 
  // Make an 'editor' role
  db_query("INSERT INTO {role} (rid, name) VALUES (3, 'editor')");
 
  // Change anonymous user's permissions - this is UPDATE rather than INSERT
  db_query("UPDATE {permission} SET perm = 'access comments, can send feedback, access content, search content, view uploaded files' WHERE rid = 1");
 
  // Change authenticated user's permissions - this is UPDATE rather than INSERT
  db_query("UPDATE {permission} SET perm = CONCAT(perm, ', search content, view uploaded files') WHERE rid = 2");
 
 
  // Allow editor role to use admin bar + other default editor permissions
  db_query("INSERT INTO {permission} (rid, perm, tid) VALUES (3, 'use admin toolbar, collapse format fieldset by default, collapsible format selection, show format selection for blocks, show format selection for comments, show format selection for nodes, show format tips, show more format tips link, administer blocks, access comments, administer comments, post comments, post comments without approval, access content, administer nodes, create page content, delete any page content, delete own page content, delete revisions, edit any page content, edit own page content, revert revisions, view revisions, search content, view uploaded files, administer users',0)");
}

function thurgood_profile_final() {
    //Nothing to do here!
    return;
}
?>
