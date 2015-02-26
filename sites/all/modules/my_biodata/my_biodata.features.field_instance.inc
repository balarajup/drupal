<?php
/**
 * @file
 * my_biodata.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function my_biodata_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-biodata-field_name'
  $field_instances['node-biodata-field_name'] = array(
    'bundle' => 'biodata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the your name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Name');
  t('Please enter the your name.');

  return $field_instances;
}
