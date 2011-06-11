<?php
/**
 * Implementation of hook_views_plugins().
 */
function views_slidecontent_views_plugins() {
  return array(
    'style' => array(
       'slidecontent' => array(
          'title' => t('Slide content'),
          'help' => t('Provide high light slide content'),
          'handler' => 'views_slidecontent_plugin_style_slidecontent',
          'theme' => 'views_slidecontent',
          'uses options' => TRUE,
          'uses row plugin' => TRUE,
          'type' => 'normal',
          'parent' => 'list',
       ),
    ),
  );
}