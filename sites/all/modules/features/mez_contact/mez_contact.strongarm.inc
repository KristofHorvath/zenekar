<?php
/**
 * @file
 * mez_contact.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mez_contact_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_default_status';
  $strongarm->value = 1;
  $export['contact_default_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_contact_site_disabled';
  $strongarm->value = TRUE;
  $export['page_manager_contact_site_disabled'] = $strongarm;

  return $export;
}
