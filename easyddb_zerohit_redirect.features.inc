<?php
/**
 * @file
 * easyddb_zerohit_redirect.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easyddb_zerohit_redirect_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
