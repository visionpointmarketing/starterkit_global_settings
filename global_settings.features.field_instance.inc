<?php
/**
 * @file
 * global_settings.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function global_settings_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-basic_wyswiyg_block-field_wysiwyg'
  $field_instances['bean-basic_wyswiyg_block-field_wysiwyg'] = array(
    'bundle' => 'basic_wyswiyg_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_wysiwyg',
    'label' => 'wysiwyg',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('wysiwyg');

  return $field_instances;
}
