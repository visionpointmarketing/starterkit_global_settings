<?php
/**
 * @file
 * global_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function global_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_blocks';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'theme' => array(
      'values' => array(
        'starterkit' => 'starterkit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'header_second',
          'weight' => '-9',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'header_second',
          'weight' => '-8',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'header_third',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'header_third',
          'weight' => '-9',
        ),
        'bean-main-menu-toggle' => array(
          'module' => 'bean',
          'delta' => 'main-menu-toggle',
          'region' => 'header_third',
          'weight' => '-8',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'nav_sidebar',
          'weight' => '-10',
        ),
        'bean-footer-links' => array(
          'module' => 'bean',
          'delta' => 'footer-links',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'bean-footer-address' => array(
          'module' => 'bean',
          'delta' => 'footer-address',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'bean-footer-social' => array(
          'module' => 'bean',
          'delta' => 'footer-social',
          'region' => 'footer_second',
          'weight' => '-9',
        ),
      ),
      'layout' => 'default_inner',
    ),
  );
  $context->condition_mode = 1;
  $export['global_blocks'] = $context;

  return $export;
}
