<?php
/**
 * @file
 * city_views.features.inc
 */

/**
 * Implements hook_views_api().
 */
function city_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_homebox().
 */
function city_views_homebox() {
  $homeboxes = array();

  $homeboxes['home'] = array(
    'regions' => 3,
    'cache' => 0,
    'color' => 0,
    'colors' => array(
      0 => '#E4F0F8',
      1 => '#E4F0F8',
      2 => '#E4F0F8',
      3 => '#E4F0F8',
      4 => '#E4F0F8',
      5 => '#E4F0F8',
    ),
    'blocks' => array(
      'views_cardiologist-block' => array(
        'module' => 'views',
        'delta' => 'cardiologist-block',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -13,
      ),
      'views_doctor-block' => array(
        'module' => 'views',
        'delta' => 'doctor-block',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -12,
      ),
      'views_patients-block' => array(
        'module' => 'views',
        'delta' => 'patients-block',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -13,
      ),
    ),
    'widths' => array(
      1 => 32,
      2 => 32,
      3 => 32,
    ),
    'title' => 'Home',
    'path' => 'dashboard',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => array(
      0 => 'authenticated user',
    ),
  );


  return $homeboxes;
}
