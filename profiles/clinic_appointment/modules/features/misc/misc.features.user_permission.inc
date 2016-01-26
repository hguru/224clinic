<?php
/**
 * @file
 * misc.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function misc_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access secured pages'.
  $permissions['access secured pages'] = array(
    'name' => 'access secured pages',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'securesite',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create a content'.
  $permissions['create a content'] = array(
    'name' => 'create a content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create c content'.
  $permissions['create c content'] = array(
    'name' => 'create c content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create d content'.
  $permissions['create d content'] = array(
    'name' => 'create d content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create p content'.
  $permissions['create p content'] = array(
    'name' => 'create p content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any a content'.
  $permissions['delete any a content'] = array(
    'name' => 'delete any a content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any c content'.
  $permissions['delete any c content'] = array(
    'name' => 'delete any c content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any d content'.
  $permissions['delete any d content'] = array(
    'name' => 'delete any d content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any p content'.
  $permissions['delete any p content'] = array(
    'name' => 'delete any p content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own a content'.
  $permissions['delete own a content'] = array(
    'name' => 'delete own a content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own c content'.
  $permissions['delete own c content'] = array(
    'name' => 'delete own c content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own d content'.
  $permissions['delete own d content'] = array(
    'name' => 'delete own d content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own p content'.
  $permissions['delete own p content'] = array(
    'name' => 'delete own p content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in city'.
  $permissions['delete terms in city'] = array(
    'name' => 'delete terms in city',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in location'.
  $permissions['delete terms in location'] = array(
    'name' => 'delete terms in location',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any a content'.
  $permissions['edit any a content'] = array(
    'name' => 'edit any a content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any c content'.
  $permissions['edit any c content'] = array(
    'name' => 'edit any c content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any d content'.
  $permissions['edit any d content'] = array(
    'name' => 'edit any d content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any p content'.
  $permissions['edit any p content'] = array(
    'name' => 'edit any p content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own a content'.
  $permissions['edit own a content'] = array(
    'name' => 'edit own a content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own c content'.
  $permissions['edit own c content'] = array(
    'name' => 'edit own c content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own d content'.
  $permissions['edit own d content'] = array(
    'name' => 'edit own d content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own p content'.
  $permissions['edit own p content'] = array(
    'name' => 'edit own p content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in city'.
  $permissions['edit terms in city'] = array(
    'name' => 'edit terms in city',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in location'.
  $permissions['edit terms in location'] = array(
    'name' => 'edit terms in location',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'update any fullcalendar event'.
  $permissions['update any fullcalendar event'] = array(
    'name' => 'update any fullcalendar event',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'fullcalendar',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  return $permissions;
}
