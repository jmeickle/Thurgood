<?php
  // Clear caches.
  drupal_flush_all_caches();
 
  // Enable the right theme. This must be handled after drupal_flush_all_caches()
  // which rebuilds the system table based on a stale static cache,
  // blowing away our changes.
  _thurgood_system_theme_data();
  db_query("UPDATE {system} SET status = 0 WHERE type = 'theme'");
  db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' AND name = 'rubik'");
  db_query("UPDATE {system} SET status = 1 WHERE type = 'theme' AND name = 'sky_thurgood'");
  variable_set('theme_default', 'sky_thurgood');
  variable_set('admin_theme', 'rubik');
  system_initialize_theme_blocks('sky_thurgood');
?>
