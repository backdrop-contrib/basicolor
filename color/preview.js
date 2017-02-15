
(function ($) {
  Backdrop.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('#preview #preview-logo img').attr('src', Backdrop.settings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off. 
      if (Backdrop.settings.color.logo == null) {
        $('div').remove('#preview-logo');
      }

      // Text preview.
      $('#preview #preview-node a', form).css('color', $('#palette input[name="palette[link]"]', form).val());

      // Header background.
      $('#preview #preview-header', form).css('background-color', $('#palette input[name="palette[header]"]', form).val());

      // Site name.
      $('#preview #preview-site-name', form).css('background-color', $('#palette input[name="palette[sitenamebg]"]', form).val());
      $('#preview #preview-site-name', form).css('color', $('#palette input[name="palette[sitenamelink]"]', form).val());

      // Header menu links
      $('#preview #preview-header-link', form).css('color', $('#palette input[name="palette[headerlink]"]', form).val());

      // Menu tabs
      $('#preview #preview-main-menu-links li', form).css('background-color', $('#palette input[name="palette[menutab]"]', form).val());

      // Page title
      $('#preview #preview-page-title', form).css('color', $('#palette input[name="palette[pagetitle]"]', form).val());

      // Breadcrumbs
      $('#preview #preview-breadcrumb', form).css('color', $('#palette input[name="palette[breadcrumbcolor]"]', form).val());
      $('#preview #preview-breadcrumb', form).css('background-color', $('#palette input[name="palette[breadcrumbbg]"]', form).val());

      // Local tabs.
      $('#preview #preview-local-tabs', form).css('background-color', $('#palette input[name="palette[localtabbanner]"]', form).val());
      $('#preview #preview-local-tabs a', form).css('background-color', $('#palette input[name="palette[localtabbg]"]', form).val());
      $('#preview #preview-local-tabs a', form).css('color', $('#palette input[name="palette[localtabcolor]"]', form).val());
      $('#preview #preview-local-tabs a.preview-active', form).css('background-color', $('#palette input[name="palette[localtabbgactive]"]', form).val());
      $('#preview #preview-local-tabs a.preview-active', form).css('color', $('#palette input[name="palette[localtabcoloractive]"]', form).val());

      // Marker.
      $('#preview #preview-marker', form).css('background-color', $('#palette input[name="palette[marker]"]', form).val());

      // Footer wrapper background.
      $('#preview #preview-footer-wrapper', form).css('background-color', $('#palette input[name="palette[footer]"]', form).val());
      $('#preview #preview-footer-wrapper', form).css('color', $('#palette input[name="palette[footercolor]"]', form).val());
      $('#preview #preview-footer-wrapper a', form).css('color', $('#palette input[name="palette[footerlinks]"]', form).val());
    }
  };
})(jQuery);
