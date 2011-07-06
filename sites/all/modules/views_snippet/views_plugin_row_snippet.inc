<?php

/** 
 *  This is the row plugin and provides option for setting the pattern used
 *  to generate row output.
 */
class views_plugin_row_snippet extends views_plugin_row {
   
  function options(&$options) {
    $options['pattern'] = '[nid]';
  }

  /**
   * Provide a form for setting options.
   */
  function options_form(&$form, &$form_state) {
    $form['pattern'] = array(
      '#type' => 'textarea',
      '#rows' => 5,
      '#title' => t('Row pattern'),
      '#description' => t('Enter a pattern for generating the content of each row here. Use the debug option from the HTML snippet style options to see what field value tokens can be used.'),
      '#default_value' => $this->options['pattern'],
    );
  }
  
}
