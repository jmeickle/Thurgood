<?php

/**
 * Implementation of hook_user_default_roles().
 */
function thurgood_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: certified organization
  $roles['certified organization'] = array(
    'name' => 'certified organization',
  );

  // Exported role: certified person
  $roles['certified person'] = array(
    'name' => 'certified person',
  );

  // Exported role: local editor
  $roles['local editor'] = array(
    'name' => 'local editor',
  );

  // Exported role: mailing list manager
  $roles['mailing list manager'] = array(
    'name' => 'mailing list manager',
  );

  // Exported role: moderator
  $roles['moderator'] = array(
    'name' => 'moderator',
  );

  // Exported role: news manager
  $roles['news manager'] = array(
    'name' => 'news manager',
  );

  // Exported role: pending authentication
  $roles['pending authentication'] = array(
    'name' => 'pending authentication',
  );

  // Exported role: site editor
  $roles['site editor'] = array(
    'name' => 'site editor',
  );

  return $roles;
}
