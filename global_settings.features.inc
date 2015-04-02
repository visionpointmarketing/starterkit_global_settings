<?php
/**
 * @file
 * global_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function global_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
