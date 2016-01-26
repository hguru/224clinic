<?php
/**
 * @file
 * misc.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function misc_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'scarborough',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1b7d6935-8084-4a20-ab85-35c8226e94ac',
    'vocabulary_machine_name' => 'location',
  );
  $terms[] = array(
    'name' => 'Toronto Downtown',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8a4a2a2f-39f2-4ad1-b521-03542bfccee0',
    'vocabulary_machine_name' => 'location',
  );
  return $terms;
}
