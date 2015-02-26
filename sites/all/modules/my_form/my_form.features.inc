<?php
/**
 * @file
 * my_form.features.inc
 */

/**
 * Implements hook_node_info().
 */
function my_form_node_info() {
  $items = array(
    'form' => array(
      'name' => t('Form'),
      'base' => 'node_content',
      'description' => t('This is form'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
