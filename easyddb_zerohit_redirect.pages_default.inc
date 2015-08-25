<?php
/**
 * @file
 * easyddb_zerohit_redirect.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function easyddb_zerohit_redirect_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'zero_search_result_hit';
  $page->task = 'page';
  $page->admin_title = 'Zero Search Result Hit';
  $page->admin_description = '';
  $page->path = 'no_results/search/%q';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'q' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_zero_search_result_hit_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'zero_search_result_hit';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7f6c5efc-8365-4fc0-a75a-400c44270074';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-98e3a1c7-b9bb-43d5-a2e7-cf2395148831';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'ding_bibliotek_info-bibliotek_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '98e3a1c7-b9bb-43d5-a2e7-cf2395148831';
    $display->content['new-98e3a1c7-b9bb-43d5-a2e7-cf2395148831'] = $pane;
    $display->panels['middle'][0] = 'new-98e3a1c7-b9bb-43d5-a2e7-cf2395148831';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-98e3a1c7-b9bb-43d5-a2e7-cf2395148831';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['zero_search_result_hit'] = $page;

  return $pages;

}
