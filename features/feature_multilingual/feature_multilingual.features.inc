<?php
/**
 * @file
 * feature_multilingual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_multilingual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
