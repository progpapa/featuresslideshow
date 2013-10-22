<?php
/**
 * @file
 * featuresslideshow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function featuresslideshow_default_rules_configuration() {
  $items = array();
  $items['rules_actions_after_saving_new_slideshow_node'] = entity_import('rules_config', '{ "rules_actions_after_saving_new_slideshow_node" : {
      "LABEL" : "Actions after saving new Slideshow node",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "nodequeue_rules" ],
      "ON" : { "node_insert--slideshow" : { "bundle" : "slideshow" } },
      "DO" : [
        { "drupal_message" : { "message" : "helo" } },
        { "nodequeue_rules_action_add_node" : { "node" : [ "node" ], "queue" : "slideshow", "unique" : 1 } }
      ]
    }
  }');
  return $items;
}
