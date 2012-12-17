<?php
/**
 * @file
 * crf_workbench_moderation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_workbench_moderation_user_default_permissions() {
  $permissions = array();

  // Exported permission: moderate content from draft to submitted_to_ocha.
  $permissions['moderate content from draft to submitted_to_ocha'] = array(
    'name' => 'moderate content from draft to submitted_to_ocha',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to submitted_to_ocha.
  $permissions['moderate content from needs_review to submitted_to_ocha'] = array(
    'name' => 'moderate content from needs_review to submitted_to_ocha',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from submitted_to_ocha to needs_review.
  $permissions['moderate content from submitted_to_ocha to needs_review'] = array(
    'name' => 'moderate content from submitted_to_ocha to needs_review',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from submitted_to_ocha to published.
  $permissions['moderate content from submitted_to_ocha to published'] = array(
    'name' => 'moderate content from submitted_to_ocha to published',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
