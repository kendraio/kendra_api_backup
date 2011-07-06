<?php

/**
 *  Declare out style and row plugins for generating HTML snippets from Views
 */

function views_snippet_views_plugins() {
  return array(
    'style' => array( //declare the views_snippet style plugin
      'views_snippet' => array(
        'title' => t('HTML Snippet'),
        'theme' => 'views_view_snippet',
        'help' => t('Displays view as HTML snippet.'),
        'handler' => 'views_plugin_style_snippet',
        'uses row plugin' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'feed',    
      ),
    ),  
    'row' => array( //declare the snippet row plugin
      'row_snippet' => array(
        'title' => t('Snippet'),
        'help' => t('(Displays the snippet data for each row from the views query.'),
        'handler' => 'views_plugin_row_snippet',
        'theme' => 'views_view_row_snippet',
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'feed',
      )
    ),
  );
}






