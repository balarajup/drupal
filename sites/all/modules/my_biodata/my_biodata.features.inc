<?php
/**
 * @file
 * my_biodata.features.inc
 */

/**
 * Implements hook_node_info().
 */
function my_biodata_node_info() {
  $items = array(
    'biodata' => array(
      'name' => t('Biodata'),
      'base' => 'node_content',
      'description' => t('This is details of person'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
