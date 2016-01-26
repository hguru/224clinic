<?php
/**
 * @file
 * misc.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function misc_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fullcalendar_options';
  $strongarm->value = array(
    'firstHour' => TRUE,
    'minTime' => TRUE,
    'maxTime' => TRUE,
    'slotMinutes' => TRUE,
    'defaultEventMinutes' => TRUE,
    'allDaySlot' => TRUE,
    'weekends' => TRUE,
    'lazyFetching' => TRUE,
    'disableDragging' => TRUE,
    'disableResizing' => TRUE,
    'dragRevertDuration' => TRUE,
    'dayClick' => TRUE,
  );
  $export['fullcalendar_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fullcalendar_path';
  $strongarm->value = 'profiles/clinic_appointment/libraries/fullcalendar';
  $export['fullcalendar_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'dashboard';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'citycardio';
  $export['theme_default'] = $strongarm;

  return $export;
}
