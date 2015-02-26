<?php
/**
 * @file
 * movies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function movies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'movies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Movies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Movies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image-mv */
  $handler->display->display_options['fields']['field_image_mv']['id'] = 'field_image_mv';
  $handler->display->display_options['fields']['field_image_mv']['table'] = 'field_data_field_image_mv';
  $handler->display->display_options['fields']['field_image_mv']['field'] = 'field_image_mv';
  $handler->display->display_options['fields']['field_image_mv']['label'] = '';
  $handler->display->display_options['fields']['field_image_mv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_mv']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_mv']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Movie';
  /* Field: Content: Cast */
  $handler->display->display_options['fields']['field_cast']['id'] = 'field_cast';
  $handler->display->display_options['fields']['field_cast']['table'] = 'field_data_field_cast';
  $handler->display->display_options['fields']['field_cast']['field'] = 'field_cast';
  $handler->display->display_options['fields']['field_cast']['delta_offset'] = '0';
  /* Field: Content: Director */
  $handler->display->display_options['fields']['field_director']['id'] = 'field_director';
  $handler->display->display_options['fields']['field_director']['table'] = 'field_data_field_director';
  $handler->display->display_options['fields']['field_director']['field'] = 'field_director';
  /* Field: User: Authentication name */
  $handler->display->display_options['fields']['authname']['id'] = 'authname';
  $handler->display->display_options['fields']['authname']['table'] = 'authmap';
  $handler->display->display_options['fields']['authname']['field'] = 'authname';
  $handler->display->display_options['fields']['authname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['authname']['label'] = 'Author name';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'entertain' => 'entertain',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Contextual filter: User: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'users';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = 'movie by %2';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'movies';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $export['movies'] = $view;

  return $export;
}
