<?php
/**
 * @file
 * content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_addon|node|a|form';
  $field_group->group_name = 'group_addon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'a';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Today Treatment',
    'weight' => '10',
    'children' => array(
      0 => 'field_procedure_code',
      1 => 'field_provider',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-addon field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_addon|node|a|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_follow|node|patient_profile|form';
  $field_group->group_name = 'group_follow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'p';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Have you had any of the following',
    'weight' => '18',
    'children' => array(
      0 => 'field_angina',
      1 => 'field_chest_pain',
      2 => 'field_congenital_heart_disease',
      3 => 'field_congestive_hart_failure',
      4 => 'field_coronary_artery_disease',
      5 => 'field_diabetes',
      6 => 'field_difficulty_of_breathing',
      7 => 'field_edema_swelling_of_ankles',
      8 => 'field_epilepsy',
      9 => 'field_heart_murmur',
      10 => 'field_hypertension',
      11 => 'field_others_please_explain_',
      12 => 'field_pacemaker',
      13 => 'field_palpitations',
      14 => 'field_previous_bypass_surgery',
      15 => 'field_reason_for_referral',
      16 => 'field_rheumatic_heart_disease',
      17 => 'field_stroke_or_previous_strokes',
      18 => 'field_syncope_loss_of_consciousn',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-follow field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_follow|node|patient_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mh|node|patient_profile|form';
  $field_group->group_name = 'group_mh';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'p';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Medial History',
    'weight' => '17',
    'children' => array(
      0 => 'field_explain_for_hospitalizing',
      1 => 'field_height',
      2 => 'field_hospitalized',
      3 => 'field_weight',
      4 => 'field_women_only',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mh field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mh|node|patient_profile|form'] = $field_group;

  return $export;
}
