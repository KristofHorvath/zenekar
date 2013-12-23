<?php
/**
 * @file
 * mez_concert_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mez_concert_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mez_concert_ct_node_info() {
  $items = array(
    'concert' => array(
      'name' => t('Concert'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
  );
  return $items;
}