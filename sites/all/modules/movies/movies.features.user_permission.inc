<?php
/**
 * @file
 * movies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function movies_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: create actor content.
  $permissions['create actor content'] = array(
    'name' => 'create actor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create director content.
  $permissions['create director content'] = array(
    'name' => 'create director content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create movie content.
  $permissions['create movie content'] = array(
    'name' => 'create movie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any actor content.
  $permissions['delete any actor content'] = array(
    'name' => 'delete any actor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any director content.
  $permissions['delete any director content'] = array(
    'name' => 'delete any director content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any movie content.
  $permissions['delete any movie content'] = array(
    'name' => 'delete any movie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own actor content.
  $permissions['delete own actor content'] = array(
    'name' => 'delete own actor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own director content.
  $permissions['delete own director content'] = array(
    'name' => 'delete own director content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own movie content.
  $permissions['delete own movie content'] = array(
    'name' => 'delete own movie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any actor content.
  $permissions['edit any actor content'] = array(
    'name' => 'edit any actor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any director content.
  $permissions['edit any director content'] = array(
    'name' => 'edit any director content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any movie content.
  $permissions['edit any movie content'] = array(
    'name' => 'edit any movie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own actor content.
  $permissions['edit own actor content'] = array(
    'name' => 'edit own actor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own director content.
  $permissions['edit own director content'] = array(
    'name' => 'edit own director content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own movie content.
  $permissions['edit own movie content'] = array(
    'name' => 'edit own movie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
