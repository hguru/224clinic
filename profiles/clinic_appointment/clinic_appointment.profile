<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'Clinic Appointment Management System';
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'clinic_appointment';
    }
  }
}

/**
 * Implements hook_install_tasks_alter().
 */
function clinic_appointment_install_tasks_alter(&$tasks, $install_state){
    $tasks['install_select_locale']['function'] = '_clinic_appointment_locale_selection';
}

// local callback function
function _clinic_appointment_locale_selection(&$install_state){
    $install_state['parameters']['locale'] = 'en';
}

/**
 * Implements hook_install_tasks()
 */
function clinic_appointment_install_tasks(&$install_state) {
  $tasks=array();
  $tasks['clinic_appointment_install_task_post_install']=array();
  return $tasks;
}

/**
 * Implements call back function clinic_appointment_install_task_post_install().
 */
function clinic_appointment_install_task_post_install() {
  module_invoke_all('clinic_appointment_post_install');
}
