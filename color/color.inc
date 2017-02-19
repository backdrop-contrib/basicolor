<?php

// Put the logo path into JavaScript for the live preview.
backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'basicolor'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'header' => t('Header background'),
    'pagebg' => t('Page background'),
    'textcolor' => t('Text color'),
    'sitenamebg' => t('Header site name background'),
    'sitenamelink' => t('Header site name link'),
    'link' => t('Link color'),
    'headerlink' => t('Header menu color'),
    'headerlinkhover' => t('Header menu color hover'),
    'menutab' => t('Menu tab background'),
    'menutabhover' => t('Menu tab background hover'),
    'menulink' => t('Menu tabs link'),
    'menulinkhover' => t('Menu tabs link hover'),
    'localtabbanner' => t('Local tabs banner background'),
    'localtabbg' => t('Local tabs background'),
    'localtabcolor' => t('Local tabs text color'),
    'localtabbgactive' => t('Local tabs background active'),
    'localtabcoloractive' => t('Local tabs text color active'),
    'pagetitle' => t('Page title'),
    'breadcrumbbg' => t('Breadcrumb background color'),
    'breadcrumbcolor' => t('Breadcrumb link color'),
    'marker' => t('Marker'),
    'footer' => t('Footer background'),
    'footercolor' => t('Footer text'),
    'footerlinks' => t('Footer links'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Basic (default)'),
      'colors' => array(
        'header' => '#20252e',
        'pagebg' => '#fffffe',
        'textcolor' => '#010000',
        'sitenamebg' => '#0075be',
        'sitenamelink' => '#feffff',
        'link' => '#0074bd',
        'headerlink' => '#0074bc',
        'headerlinkactive' => '#114a75',
        'headerlinkhover' => '#edf8ff',
        'menutab' => '#20252f',
        'menutabhover' => '#114a76',
        'menulink' => '#efffff',
        'menulinkhover' => '#fefefe',
        'localtabbanner' => '#586172',
        'localtabbg' => '#dee2ea',
        'localtabcolor' => '#757575',
        'localtabbgactive' => '#fefeff',
        'localtabcoloractive' => '#000100',
        'pagetitle' => '#586171',
        'breadcrumbbg' => '#dee2eb',
        'breadcrumbcolor' => '#000000',
        'marker' => '#abdeff',
        'footer' => '#fffeff',
        'footercolor' => '#000001',
        'footerlinks' => '#0074bb',
      ),
    ),
    'darkness' => array(
      'title' => t('Darkness'),
      'colors' => array(
        'header' => '#000000',
        'pagebg' => '#000000',
        'textcolor' => '#eeeeee',
        'sitenamebg' => '#20252e',
        'sitenamelink' => '#feffff',
        'link' => '#cccccc',
        'headerlink' => '#ffffff',
        'headerlinkhover' => '#cccccc',
        'menutab' => '#20252f',
        'menutabhover' => '#000000',
        'menulink' => '#efffff',
        'menulinkhover' => '#fefefe',
        'localtabbanner' => '#111111',
        'localtabbg' => '#20252e',
        'localtabcolor' => '#ffffff',
        'localtabbgactive' => '#fffeff',
        'localtabcoloractive' => '#000100',
        'pagetitle' => '#ffffff',
        'breadcrumbbg' => '#20252e',
        'breadcrumbcolor' => '#ffffff',
        'marker' => '#b8b8b8',
        'footer' => '#fffeff',
        'footercolor' => '#000001',
        'footerlinks' => '#20252e',
      ),
    ),
    'easyblue' => array(
      'title' => t('Easy blue'),
      'colors' => array(
        'header' => '#678cbb',
        'pagebg' => '#ffffff',
        'textcolor' => '#010000',
        'sitenamebg' => '#2c568c',
        'sitenamelink' => '#feffff',
        'link' => '#20252e',
        'headerlink' => '#ffffff',
        'headerlinkhover' => '#94b2d8',
        'menutab' => '#678cbb',
        'menutabhover' => '#94b2d8',
        'menulink' => '#efffff',
        'menulinkhover' => '#2c568c',
        'localtabbanner' => '#737783',
        'localtabbg' => '#32373f',
        'localtabcolor' => '#ffffff',
        'localtabbgactive' => '#fffeff',
        'localtabcoloractive' => '#000100',
        'pagetitle' => '#3264a4',
        'breadcrumbbg' => '#737783',
        'breadcrumbcolor' => '#ffffff',
        'marker' => '#4dd4b8',
        'footer' => '#737783',
        'footercolor' => '#000001',
        'footerlinks' => '#ffffff',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(),

  // Gradient definitions.
  'gradients' => array(),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
