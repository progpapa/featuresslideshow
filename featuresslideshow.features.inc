<?php
/**
 * @file
 * featuresslideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function featuresslideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function featuresslideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function featuresslideshow_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: slideshow
  $nodequeues['slideshow'] = array(
    'name' => 'slideshow',
    'title' => 'Slideshow',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slideshow',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function featuresslideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'name' => 'slideshow',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slideshow',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function featuresslideshow_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
