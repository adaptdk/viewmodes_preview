<?php

/**
 * Implements hook_views_data().
 */

function viewmodes_preview_views_data() {
  $data = array();
  $data['node']['viewmodes_preview'] = array(
    'title' => t('View modes'),
    'help' => t('Show available view modes for node.'),
    'field' => array(
      'handler' => 'views_handler_field_node_link_viewmodes_preview',
    ),
  );
  return $data;
}

/**
 * Implementation of hook_views_handlers()
 */
function viewmodes_preview_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'viewmodes_preview') . '/includes/views/handlers',
    ),
    'handlers' => array(
      // The name of my handler.
      'views_handler_field_node_link_viewmodes_preview' => array(
      // The name of the handler we are extending.
        'parent' => 'views_handler_field_node_link',
      ),
    ),
  );
}