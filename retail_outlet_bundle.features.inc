<?php
/**
 * @file
 * retail_outlet_bundle.features.inc
 */

/**
 * Implements hook_node_info().
 */
function retail_outlet_bundle_node_info() {
  $items = array(
    'retail_outlet' => array(
      'name' => t('Retail Outlet'),
      'base' => 'node_content',
      'description' => t('A physical location where K-Way products are sold'),
      'has_title' => '1',
      'title_label' => t('Store Name'),
      'help' => '',
    ),
  );
  return $items;
}
