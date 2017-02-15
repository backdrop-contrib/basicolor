<?php
/**
 * @file
 * Theme settings file for Basicol.
 *
 * Although Basicol itself does not provide any settings, we use this file to
 * inform the user that the module supports color schemes if the Color module
 * is enabled.
 */
$form['color'] = array(
  '#markup' => '<p>' . t('This theme supports custom color palettes if the Color module is enabled on the <a href="!url">modules page</a>. Enable the Color module to customize this theme.', array('!url' => url('admin/modules'))) . '</p>',
);

$form['font_size_wrapper'] = array(
  '#type' => 'fieldset',
  '#title' => t('Font size'),
);
$form['font_size_wrapper']['font_size'] = array(
  '#type' => 'radios',
  '#options' => array(
    'bc-largest' => t('Largest'),
    'bc-larger' => t('Larger'),
    'bc-normal' => t('Normal'),
    'bc-smaller' => t('Smaller'),
    'bc-smallest' => t('Even smaller'),
  ),
  '#default_value' => theme_get_setting('font_size', 'basicolor'),
  '#description' => t('Adjust the size of the fonts displayed by Basicolor.'),
);
$form['font_family'] = array(
  '#type' => 'fieldset',
  '#title' => t('Font family'),
);
$form['font_family']['header_font'] = array(
  '#title' => t('Header text font'),
  '#type' => 'select',
  '#options' => array(
    'hf-default' => 'Default',
    'hf-georgia' => 'Georgia, serif',
    'hf-palatino' => '"Palatino Linotype", "Book Antiqua", Palatino, serif',
    'hf-times' => '"Times New Roman", Times, serif',
    'hf-arial' => 'Arial, Helvetica, sans-serif',
    'hf-arial_black' => '"Arial Black", Gadget, sans-serif',
    'hf-comic_sans' => '"Comic Sans MS", cursive, sans-serif',
    'hf-impact' => 'Impact, Charcoal, sans-serif',
    'hf-lucida_sans' => '"Lucida Sans Unicode", "Lucida Grande", sans-serif',
    'hf-tahoma' => 'Tahoma, Geneva, sans-serif',
    'hf-trebuchet' => '"Trebuchet MS", Helvetica, sans-serif',
    'hf-verdana' => 'Verdana, Geneva, sans-serif',
    'hf-monospace' => 'Monospace Fonts',
    'hf-courier' => '"Courier New", Courier, monospace',
    'hf-lucida_console' => '"Lucida Console", Monaco, monospace',
  ),
  '#default_value' => theme_get_setting('header_font', 'basicolor'),
  '#description' => t('Adjust the fonts displayed by Basicolor for header text.'),
);
$form['font_family']['sitename_font'] = array(
  '#title' => t('Site name font'),
  '#type' => 'select',
  '#options' => array(
    'sn-default' => 'Default',
    'sn-georgia' => 'Georgia, serif',
    'sn-palatino' => '"Palatino Linotype", "Book Antiqua", Palatino, serif',
    'sn-times' => '"Times New Roman", Times, serif',
    'sn-arial' => 'Arial, Helvetica, sans-serif',
    'sn-arial_black' => '"Arial Black", Gadget, sans-serif',
    'sn-comic_sans' => '"Comic Sans MS", cursive, sans-serif',
    'sn-impact' => 'Impact, Charcoal, sans-serif',
    'sn-lucida_sans' => '"Lucida Sans Unicode", "Lucida Grande", sans-serif',
    'sn-tahoma' => 'Tahoma, Geneva, sans-serif',
    'sn-trebuchet' => '"Trebuchet MS", Helvetica, sans-serif',
    'sn-verdana' => 'Verdana, Geneva, sans-serif',
    'sn-monospace' => 'Monospace Fonts',
    'sn-courier' => '"Courier New", Courier, monospace',
    'sn-lucida_console' => '"Lucida Console", Monaco, monospace',
  ),
  '#default_value' => theme_get_setting('sitename_font', 'basicolor'),
  '#description' => t('Adjust the fonts displayed by Basicolor for the site name.'),
);
$form['font_family']['body_font'] = array(
  '#title' => t('Body text font'),
  '#type' => 'select',
  '#options' => array(
    'bf-default' => 'Default',
    'bf-georgia' => 'Georgia, serif',
    'bf-palatino' => '"Palatino Linotype", "Book Antiqua", Palatino, serif',
    'bf-times' => '"Times New Roman", Times, serif',
    'bf-arial' => 'Arial, Helvetica, sans-serif',
    'bf-comic_sans' => '"Comic Sans MS", cursive, sans-serif',
    'bf-lucida_sans' => '"Lucida Sans Unicode", "Lucida Grande", sans-serif',
    'bf-tahoma' => 'Tahoma, Geneva, sans-serif',
    'bf-trebuchet' => '"Trebuchet MS", Helvetica, sans-serif',
    'bf-verdana' => 'Verdana, Geneva, sans-serif',
    'bf-monospace' => 'Monospace Fonts',
    'bf-courier' => '"Courier New", Courier, monospace',
    'bf-lucida_console' => '"Lucida Console", Monaco, monospace',
  ),
  '#default_value' => theme_get_setting('body_font', 'basicolor'),
  '#description' => t('Adjust the fonts displayed by Basicolor for normal text.'),
);
