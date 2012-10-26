<?php
/**
 * @file
 * humanitarianresponse_organizations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_organizations_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer organizations vocabulary terms.
  $permissions['administer organizations vocabulary terms'] = array(
    'name' => 'administer organizations vocabulary terms',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: clear csv_organizations feeds.
  $permissions['clear csv_organizations feeds'] = array(
    'name' => 'clear csv_organizations feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: import csv_organizations feeds.
  $permissions['import csv_organizations feeds'] = array(
    'name' => 'import csv_organizations feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock csv_organizations feeds.
  $permissions['unlock csv_organizations feeds'] = array(
    'name' => 'unlock csv_organizations feeds',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
