<?php
/**
 * @file
 * misc.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function misc_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_due-to-follow-up:due-for-check-up
  $menu_links['main-menu_due-to-follow-up:due-for-check-up'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'due-for-check-up',
    'router_path' => 'due-for-check-up',
    'link_title' => 'Due to Follow Up',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_due-to-follow-up:due-for-check-up',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_patient-profile-setup:node/add/p
  $menu_links['main-menu_patient-profile-setup:node/add/p'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/p',
    'router_path' => 'node/add',
    'link_title' => 'Patient Profile Setup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_patient-profile-setup:node/add/p',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_patient-search:patient-search
  $menu_links['main-menu_patient-search:patient-search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'patient-search',
    'router_path' => 'patient-search',
    'link_title' => 'Patient Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_patient-search:patient-search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_report:appointment-history
  $menu_links['main-menu_report:appointment-history'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'appointment-history',
    'router_path' => 'appointment-history',
    'link_title' => 'Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_report:appointment-history',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_scheduler:appointment
  $menu_links['main-menu_scheduler:appointment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'appointment',
    'router_path' => 'appointment',
    'link_title' => 'Scheduler',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_scheduler:appointment',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_setup-appointment:node/add/a
  $menu_links['main-menu_setup-appointment:node/add/a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/a',
    'router_path' => 'node/add',
    'link_title' => 'Setup Appointment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_setup-appointment:node/add/a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Due to Follow Up');
  t('Home');
  t('Patient Profile Setup');
  t('Patient Search');
  t('Report');
  t('Scheduler');
  t('Setup Appointment');


  return $menu_links;
}
