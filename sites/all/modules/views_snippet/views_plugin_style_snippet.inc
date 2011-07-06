<?php

/**
 *  This defines the style plugin and provides options for setting the 
 *  prefix and suffixes that wrap around the output, and for turning on debug
 *  output to see what field content is available.
 */
class views_plugin_style_snippet extends views_plugin_style {
  
  function options(&$options) {  
    $options['prefix'] = '<ul>';
    $options['suffix'] = '</ul>';
    $options['row_prefix'] = '<li>';
    $options['row_suffix'] = '</li>';
    $options['debug_output'] = FALSE;
  }

  function options_form(&$form, &$form_state) {
    $form['prefix'] = array(
      '#type' => 'textarea',
      '#rows' => 3,
      '#title' => t('Prefix'),
      '#description' => t('Enter any code you wish to appear before the View result output.'),
      '#default_value' => $this->options['prefix'],
    );
    $form['suffix'] = array(
      '#type' => 'textarea',
      '#rows' => 3,
      '#title' => t('Suffix'),
      '#description' => t('Enter any code you wish to appear after the View result output.'),
      '#default_value' => $this->options['suffix'],
    );
    $form['row_prefix'] = array(
      '#type' => 'textarea',
      '#rows' => 3,
      '#title' => t('Row prefix'),
      '#description' => t('Enter any code you wish to appear before each row of the View result output.'),
      '#default_value' => $this->options['row_prefix'],
    );
    $form['row_suffix'] = array(
      '#type' => 'textarea',
      '#rows' => 3,
      '#title' => t('Row suffix'),
      '#description' => t('Enter any code you wish to appear after each row of the View result output.'),
      '#default_value' => $this->options['row_suffix'],
    );
    $form['debug_output'] = array(
      '#type' => 'checkbox',
      '#rows' => 3,
      '#title' => t('Show debug output in views admin'),
      '#description' => t('Enabling this option then previewing the view will show you which tokens are available via a helpful drupal_set_message().'),
      '#default_value' => $this->options['debug_output'],
    );
  }

}
