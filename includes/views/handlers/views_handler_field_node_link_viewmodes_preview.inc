<?php

/**
 * @file
 */

/**
 * Field handler to present a link to delete a node.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_node_link_viewmodes_preview extends views_handler_field_node_link {

  /**
   * Renders the link.
   */
  function render_link($node, $values) {

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "node/$node->nid/viewmodes-preview";
    $this->options['alter']['query'] = drupal_get_destination();

    $text = !empty($this->options['text']) ? $this->options['text'] : t('show');
    return $text;
  }
}
