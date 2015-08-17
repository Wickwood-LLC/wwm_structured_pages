<?php
/**
 * @file
 * wwm_structured_pages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function wwm_structured_pages_defaultconfig_features() {
  return array(
    'wwm_structured_pages' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function wwm_structured_pages_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_post_pattern';
  $strongarm->value = 'articles/[node:published:custom:Y]/[node:published:custom:m]/[node:published:custom:d]/[node:title]';
  $export['pathauto_node_article_post_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_press_release_pattern';
  $strongarm->value = 'press-releases/[node:published:custom:Y]/[node:published:custom:m]/[node:published:custom:d]/[node:title]';
  $export['pathauto_node_press_release_pattern'] = $strongarm;

  return $export;
}
