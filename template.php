<?php
/**
 * @file
 * Basicolor preprocess functions and theme function overrides.
 */

/**
 * Prepares variables for page template.
 */
function basicolor_preprocess_page(&$variables) {
  $variables['classes'][] = theme_get_setting('font_size', 'basicolor');
  $variables['classes'][] = str_replace('_', '-', theme_get_setting('body_font', 'basicolor'));
  $variables['classes'][] = str_replace('_', '-', theme_get_setting('header_font', 'basicolor'));
  $variables['classes'][] = str_replace('_', '-', theme_get_setting('sitename_font', 'basicolor'));
}
