<?php

// Put the logo path into JavaScript for the live preview.
backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'basicol'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'header' => t('Header background'),
    'sitenamebg' => t('Header site name background'),
    'sitenamelink' => t('Header site name link'),
    'link' => t('Link color'),
    'headerlink' => t('Header link color'),
    'headerlinkactive' => t('Header link color active'),
    'headerlinkhover' => t('Header link color hover'),
    'menutab' => t('Menu tab background'),
    'menulink' => t('Menu tabs link'),
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
        'sitenamebg' => '#0075be',
        'sitenamelink' => '#feffff',
        'link' => '#0074bd',
        'headerlink' => '#0074bc',
        'headerlinkactive' => '#114a75',
        'headerlinkhover' => '#edf8ff',
        'menutab' => '#20252f',
        'menulink' => '#efffff',
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
    'thisyear' => array(
      'title' => t('Nicer'),
      'colors' => array(
        'header' => '#ffffff',
        'sitenamebg' => '#0174be',
        'sitenamelink' => '#feffff',
        'link' => '#2a320e',
        'headerlink' => '#0074bc',
        'headerlinkactive' => '#11ee75',
        'headerlinkhover' => '#ed00ff',
        'menutab' => '#20ff2f',
        'menulink' => '#efffff',
        'localtabbanner' => '#58dd72',
        'localtabbg' => '#87ff54',
        'localtabcolor' => '#ffffff',
        'localtabbgactive' => '#fffeff',
        'localtabcoloractive' => '#000100',
        'pagetitle' => '#fe74be',
        'breadcrumbbg' => '#3d6fc5',
        'breadcrumbcolor' => '#008800',
        'marker' => '#abd33f',
        'footer' => '#fffeff',
        'footercolor' => '#000001',
        'footerlinks' => '#0074bb',
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
