<?php
/**
 * @file
 * misc.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function misc_user_default_roles() {
  $roles = array();

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 12,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 11,
  );

  return $roles;
}
