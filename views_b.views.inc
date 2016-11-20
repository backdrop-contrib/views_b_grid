<?php
/**
 * @file
 * Provide views data and handlers for views_b module.
 */

/**
 * Implements hook_views_plugins().
 */
function views_b_views_plugins() {
  return array(
    'style' => array(
      'flexviews' => array(
        'title' => t('Bootstrap 4 grid'),
        'handler' => 'views_plugin_style_views_b',
        'help' => t("Display content in views_b"),
        'theme' => 'views_view_views_b',
        'type' => 'normal',
        'path' => backdrop_get_path('module', 'views_b'),
        'theme path' => backdrop_get_path('module', 'views_b'),
        'uses row plugin' => TRUE,
        'uses row class' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
      ),
    ),
  );
}

