<?php
/**
 * @file
 * openedu_course_program.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openedu_course_program_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Minimum Credits */
  $handler->display->display_options['fields']['field_minimum_credits']['id'] = 'field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['table'] = 'field_data_field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['field'] = 'field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['label'] = '';
  $handler->display->display_options['fields']['field_minimum_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimum_credits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Maximum Credits */
  $handler->display->display_options['fields']['field_maximum_credits']['id'] = 'field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['table'] = 'field_data_field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['field'] = 'field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['label'] = '';
  $handler->display->display_options['fields']['field_maximum_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maximum_credits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Course Number */
  $handler->display->display_options['fields']['field_course_number']['id'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['fields']['field_course_number']['field'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['label'] = '';
  $handler->display->display_options['fields']['field_course_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['label'] = '';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Minimum Credits (field_minimum_credits) */
  $handler->display->display_options['sorts']['field_minimum_credits_value']['id'] = 'field_minimum_credits_value';
  $handler->display->display_options['sorts']['field_minimum_credits_value']['table'] = 'field_data_field_minimum_credits';
  $handler->display->display_options['sorts']['field_minimum_credits_value']['field'] = 'field_minimum_credits_value';
  /* Sort criterion: Content: Maximum Credits (field_maximum_credits) */
  $handler->display->display_options['sorts']['field_maximum_credits_value']['id'] = 'field_maximum_credits_value';
  $handler->display->display_options['sorts']['field_maximum_credits_value']['table'] = 'field_data_field_maximum_credits';
  $handler->display->display_options['sorts']['field_maximum_credits_value']['field'] = 'field_maximum_credits_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: Campus (field_campus) */
  $handler->display->display_options['sorts']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['sorts']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['sorts']['field_campus_tid']['field'] = 'field_campus_tid';
  /* Sort criterion: Content: Course Number (field_course_number) */
  $handler->display->display_options['sorts']['field_course_number_value']['id'] = 'field_course_number_value';
  $handler->display->display_options['sorts']['field_course_number_value']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['sorts']['field_course_number_value']['field'] = 'field_course_number_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Body (body:summary) */
  $handler->display->display_options['filters']['body_summary']['id'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_summary']['field'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['operator'] = 'not empty';
  $handler->display->display_options['filters']['body_summary']['group'] = 1;
  $handler->display->display_options['filters']['body_summary']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_summary']['expose']['operator_id'] = 'body_summary_op';
  $handler->display->display_options['filters']['body_summary']['expose']['label'] = 'Body (body:summary)';
  $handler->display->display_options['filters']['body_summary']['expose']['operator'] = 'body_summary_op';
  $handler->display->display_options['filters']['body_summary']['expose']['identifier'] = 'body_summary';
  /* Filter criterion: Content: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['value'] = '';
  $handler->display->display_options['filters']['field_campus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_campus_tid']['vocabulary'] = 'campus';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no results available.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Minimum Credits */
  $handler->display->display_options['fields']['field_minimum_credits']['id'] = 'field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['table'] = 'field_data_field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['field'] = 'field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['label'] = '';
  $handler->display->display_options['fields']['field_minimum_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimum_credits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Maximum Credits */
  $handler->display->display_options['fields']['field_maximum_credits']['id'] = 'field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['table'] = 'field_data_field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['field'] = 'field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['label'] = '';
  $handler->display->display_options['fields']['field_maximum_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maximum_credits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Course Number */
  $handler->display->display_options['fields']['field_course_number']['id'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['fields']['field_course_number']['field'] = 'field_course_number';
  $handler->display->display_options['fields']['field_course_number']['label'] = '';
  $handler->display->display_options['fields']['field_course_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['label'] = '';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_related_programs']['id'] = 'field_related_programs';
  $handler->display->display_options['fields']['field_related_programs']['table'] = 'field_data_field_related_programs';
  $handler->display->display_options['fields']['field_related_programs']['field'] = 'field_related_programs';
  $handler->display->display_options['fields']['field_related_programs']['label'] = '';
  $handler->display->display_options['fields']['field_related_programs']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Minimum Credits (field_minimum_credits) */
  $handler->display->display_options['sorts']['field_minimum_credits_value']['id'] = 'field_minimum_credits_value';
  $handler->display->display_options['sorts']['field_minimum_credits_value']['table'] = 'field_data_field_minimum_credits';
  $handler->display->display_options['sorts']['field_minimum_credits_value']['field'] = 'field_minimum_credits_value';
  $handler->display->display_options['sorts']['field_minimum_credits_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_minimum_credits_value']['expose']['label'] = 'Minimum Credits';
  /* Sort criterion: Content: Maximum Credits (field_maximum_credits) */
  $handler->display->display_options['sorts']['field_maximum_credits_value']['id'] = 'field_maximum_credits_value';
  $handler->display->display_options['sorts']['field_maximum_credits_value']['table'] = 'field_data_field_maximum_credits';
  $handler->display->display_options['sorts']['field_maximum_credits_value']['field'] = 'field_maximum_credits_value';
  $handler->display->display_options['sorts']['field_maximum_credits_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_maximum_credits_value']['expose']['label'] = 'Maximum Credits';
  /* Sort criterion: Content: Campus (field_campus) */
  $handler->display->display_options['sorts']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['sorts']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['sorts']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['sorts']['field_campus_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_campus_tid']['expose']['label'] = 'Campus';
  /* Sort criterion: Content: Course Number (field_course_number) */
  $handler->display->display_options['sorts']['field_course_number_value']['id'] = 'field_course_number_value';
  $handler->display->display_options['sorts']['field_course_number_value']['table'] = 'field_data_field_course_number';
  $handler->display->display_options['sorts']['field_course_number_value']['field'] = 'field_course_number_value';
  $handler->display->display_options['sorts']['field_course_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_course_number_value']['expose']['label'] = 'Course Number';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['group'] = 1;
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Summary';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  /* Filter criterion: Content: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator_id'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['label'] = 'Campus';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['identifier'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_campus_tid']['vocabulary'] = 'campus';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Start Date (field_start_date) */
  $handler->display->display_options['filters']['field_start_date_value']['id'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['filters']['field_start_date_value']['field'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_start_date_value']['expose']['operator_id'] = 'field_start_date_value_op';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['operator'] = 'field_start_date_value_op';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['identifier'] = 'field_start_date_value';
  $handler->display->display_options['path'] = 'courses';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Related Programs */
  $handler = $view->new_display('block', 'Related Programs', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Programs';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no programs found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Courses (field_coursework) - reverse */
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['id'] = 'reverse_field_coursework_node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['field'] = 'reverse_field_coursework_node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_coursework_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_coursework_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Related Major Minor */
  $handler = $view->new_display('block', 'Related Major Minor', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Majors / Minors';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no majors found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Courses (field_coursework) - reverse */
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['id'] = 'reverse_field_coursework_node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['field'] = 'reverse_field_coursework_node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['required'] = TRUE;
  /* Relationship: Content: Major Page (field_major_page) */
  $handler->display->display_options['relationships']['field_major_page_nid']['id'] = 'field_major_page_nid';
  $handler->display->display_options['relationships']['field_major_page_nid']['table'] = 'field_data_field_major_page';
  $handler->display->display_options['relationships']['field_major_page_nid']['field'] = 'field_major_page_nid';
  $handler->display->display_options['relationships']['field_major_page_nid']['relationship'] = 'reverse_field_coursework_node';
  $handler->display->display_options['relationships']['field_major_page_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_major_page_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_major_page_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Related Jobs */
  $handler = $view->new_display('block', 'Related Jobs', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Career Options';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no jobs found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Courses (field_coursework) - reverse */
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['id'] = 'reverse_field_coursework_node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['field'] = 'reverse_field_coursework_node';
  $handler->display->display_options['relationships']['reverse_field_coursework_node']['required'] = TRUE;
  /* Relationship: Content: Careers and Internships (field_careers_and_internships) */
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['id'] = 'field_careers_and_internships_nid';
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['table'] = 'field_data_field_careers_and_internships';
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['field'] = 'field_careers_and_internships_nid';
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['relationship'] = 'reverse_field_coursework_node';
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_careers_and_internships_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_deadline']['id'] = 'field_deadline';
  $handler->display->display_options['fields']['field_deadline']['table'] = 'field_data_field_deadline';
  $handler->display->display_options['fields']['field_deadline']['field'] = 'field_deadline';
  $handler->display->display_options['fields']['field_deadline']['relationship'] = 'field_careers_and_internships_nid';
  $handler->display->display_options['fields']['field_deadline']['label'] = '';
  $handler->display->display_options['fields']['field_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_major_page_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['course_directory'] = array(
    t('Master'),
    t('Course Directory'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Post date'),
    t('Body (body:summary)'),
    t('Page'),
    t('Courses'),
    t('There are currently no results available.'),
    t('Title'),
    t('Minimum Credits'),
    t('Maximum Credits'),
    t('Campus'),
    t('Course Number'),
    t('Summary'),
    t('Start Date'),
    t('Block'),
    t('Related Programs'),
    t('Sorry, no programs found.'),
    t('field_coursework'),
    t('All'),
    t('Related Major Minor'),
    t('Related Majors / Minors'),
    t('Sorry, no majors found.'),
    t('field_major_page'),
    t('Related Jobs'),
    t('Career Options'),
    t('Sorry, no jobs found.'),
    t('field_careers_and_internships'),
  );
  $export['course_directory'] = $view;

  $view = new view();
  $view->name = 'program_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Program';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faculty';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Content';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, No programs found';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['label'] = '';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  /* Field: Content: Courses */
  $handler->display->display_options['fields']['field_coursework']['id'] = 'field_coursework';
  $handler->display->display_options['fields']['field_coursework']['table'] = 'field_data_field_coursework';
  $handler->display->display_options['fields']['field_coursework']['field'] = 'field_coursework';
  $handler->display->display_options['fields']['field_coursework']['label'] = '';
  $handler->display->display_options['fields']['field_coursework']['element_label_colon'] = FALSE;
  /* Field: Content: Degrees */
  $handler->display->display_options['fields']['field_degrees']['id'] = 'field_degrees';
  $handler->display->display_options['fields']['field_degrees']['table'] = 'field_data_field_degrees';
  $handler->display->display_options['fields']['field_degrees']['field'] = 'field_degrees';
  $handler->display->display_options['fields']['field_degrees']['label'] = '';
  $handler->display->display_options['fields']['field_degrees']['element_label_colon'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['label'] = '';
  $handler->display->display_options['fields']['field_end_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_end_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Completion Months */
  $handler->display->display_options['fields']['field_completion_months']['id'] = 'field_completion_months';
  $handler->display->display_options['fields']['field_completion_months']['table'] = 'field_data_field_completion_months';
  $handler->display->display_options['fields']['field_completion_months']['field'] = 'field_completion_months';
  $handler->display->display_options['fields']['field_completion_months']['label'] = '';
  $handler->display->display_options['fields']['field_completion_months']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Campus (field_campus) */
  $handler->display->display_options['sorts']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['sorts']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['sorts']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['sorts']['field_campus_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_campus_tid']['expose']['label'] = 'Campus (field_campus)';
  /* Sort criterion: Content: Completion Months (field_completion_months) */
  $handler->display->display_options['sorts']['field_completion_months_value']['id'] = 'field_completion_months_value';
  $handler->display->display_options['sorts']['field_completion_months_value']['table'] = 'field_data_field_completion_months';
  $handler->display->display_options['sorts']['field_completion_months_value']['field'] = 'field_completion_months_value';
  /* Sort criterion: Content: Degrees (field_degrees) */
  $handler->display->display_options['sorts']['field_degrees_tid']['id'] = 'field_degrees_tid';
  $handler->display->display_options['sorts']['field_degrees_tid']['table'] = 'field_data_field_degrees';
  $handler->display->display_options['sorts']['field_degrees_tid']['field'] = 'field_degrees_tid';
  /* Sort criterion: Content: Faculty (field_faculty) */
  $handler->display->display_options['sorts']['field_faculty_nid']['id'] = 'field_faculty_nid';
  $handler->display->display_options['sorts']['field_faculty_nid']['table'] = 'field_data_field_faculty';
  $handler->display->display_options['sorts']['field_faculty_nid']['field'] = 'field_faculty_nid';
  /* Sort criterion: Content: Start Date (field_start_date) */
  $handler->display->display_options['sorts']['field_start_date_value']['id'] = 'field_start_date_value';
  $handler->display->display_options['sorts']['field_start_date_value']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['sorts']['field_start_date_value']['field'] = 'field_start_date_value';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_related_programs_nid']['id'] = 'field_related_programs_nid';
  $handler->display->display_options['arguments']['field_related_programs_nid']['table'] = 'field_data_field_related_programs';
  $handler->display->display_options['arguments']['field_related_programs_nid']['field'] = 'field_related_programs_nid';
  $handler->display->display_options['arguments']['field_related_programs_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_related_programs_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_related_programs_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_programs_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_programs_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Body (body:summary) */
  $handler->display->display_options['filters']['body_summary']['id'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_summary']['field'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['operator'] = 'not empty';
  /* Filter criterion: Content: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['value'] = '';
  $handler->display->display_options['filters']['field_campus_tid']['vocabulary'] = 'campus';
  /* Filter criterion: Content: Courses (field_coursework) */
  $handler->display->display_options['filters']['field_coursework_nid']['id'] = 'field_coursework_nid';
  $handler->display->display_options['filters']['field_coursework_nid']['table'] = 'field_data_field_coursework';
  $handler->display->display_options['filters']['field_coursework_nid']['field'] = 'field_coursework_nid';
  $handler->display->display_options['filters']['field_coursework_nid']['operator'] = 'not empty';
  /* Filter criterion: Content: Faculty (field_faculty) */
  $handler->display->display_options['filters']['field_faculty_nid']['id'] = 'field_faculty_nid';
  $handler->display->display_options['filters']['field_faculty_nid']['table'] = 'field_data_field_faculty';
  $handler->display->display_options['filters']['field_faculty_nid']['field'] = 'field_faculty_nid';
  $handler->display->display_options['filters']['field_faculty_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_faculty_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_faculty_nid']['expose']['operator_id'] = 'field_faculty_nid_op';
  $handler->display->display_options['filters']['field_faculty_nid']['expose']['label'] = 'Faculty (field_faculty)';
  $handler->display->display_options['filters']['field_faculty_nid']['expose']['operator'] = 'field_faculty_nid_op';
  $handler->display->display_options['filters']['field_faculty_nid']['expose']['identifier'] = 'field_faculty_nid';
  /* Filter criterion: Content: Start Date (field_start_date) */
  $handler->display->display_options['filters']['field_start_date_value']['id'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['filters']['field_start_date_value']['field'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['operator'] = '>=';

  /* Display: Related courses */
  $handler = $view->new_display('block', 'Related courses', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coursework';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Content';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no courses found';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Courses (field_coursework) */
  $handler->display->display_options['relationships']['field_coursework_nid']['id'] = 'field_coursework_nid';
  $handler->display->display_options['relationships']['field_coursework_nid']['table'] = 'field_data_field_coursework';
  $handler->display->display_options['relationships']['field_coursework_nid']['field'] = 'field_coursework_nid';
  $handler->display->display_options['relationships']['field_coursework_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_coursework_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Related jobs */
  $handler = $view->new_display('block', 'Related jobs', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Career Options';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Content';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no jobs found';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Careers and Internships (field_careers_and_internships) */
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['id'] = 'field_careers_and_internships_nid';
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['table'] = 'field_data_field_careers_and_internships';
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['field'] = 'field_careers_and_internships_nid';
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_careers_and_internships_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_careers_and_internships_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_deadline']['id'] = 'field_deadline';
  $handler->display->display_options['fields']['field_deadline']['table'] = 'field_data_field_deadline';
  $handler->display->display_options['fields']['field_deadline']['field'] = 'field_deadline';
  $handler->display->display_options['fields']['field_deadline']['relationship'] = 'field_careers_and_internships_nid';
  $handler->display->display_options['fields']['field_deadline']['label'] = '';
  $handler->display->display_options['fields']['field_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block Listing */
  $handler = $view->new_display('block', 'Block Listing', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_fact_sheet' => 'field_fact_sheet',
    'field_is_minor' => 'field_is_minor',
    'field_campus' => 'field_campus',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fact_sheet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_minor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_campus' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Undergraduate Major or Programs';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Fact Sheet */
  $handler->display->display_options['fields']['field_fact_sheet']['id'] = 'field_fact_sheet';
  $handler->display->display_options['fields']['field_fact_sheet']['table'] = 'field_data_field_fact_sheet';
  $handler->display->display_options['fields']['field_fact_sheet']['field'] = 'field_fact_sheet';
  $handler->display->display_options['fields']['field_fact_sheet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fact_sheet']['click_sort_column'] = 'fid';
  /* Field: Content: Is Minor */
  $handler->display->display_options['fields']['field_is_minor']['id'] = 'field_is_minor';
  $handler->display->display_options['fields']['field_is_minor']['table'] = 'field_data_field_is_minor';
  $handler->display->display_options['fields']['field_is_minor']['field'] = 'field_is_minor';
  $handler->display->display_options['fields']['field_is_minor']['label'] = 'Minor';
  $handler->display->display_options['fields']['field_is_minor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_is_minor']['type'] = 'list_key';
  /* Field: Content: Campus */
  $handler->display->display_options['fields']['field_campus']['id'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['table'] = 'field_data_field_campus';
  $handler->display->display_options['fields']['field_campus']['field'] = 'field_campus';
  $handler->display->display_options['fields']['field_campus']['label'] = 'Campus Location';
  $handler->display->display_options['fields']['field_campus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_campus']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Area of Study (field_area_of_study) */
  $handler->display->display_options['filters']['field_area_of_study_tid']['id'] = 'field_area_of_study_tid';
  $handler->display->display_options['filters']['field_area_of_study_tid']['table'] = 'field_data_field_area_of_study';
  $handler->display->display_options['filters']['field_area_of_study_tid']['field'] = 'field_area_of_study_tid';
  $handler->display->display_options['filters']['field_area_of_study_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_area_of_study_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_area_of_study_tid']['expose']['operator_id'] = 'field_area_of_study_tid_op';
  $handler->display->display_options['filters']['field_area_of_study_tid']['expose']['label'] = 'Area of Study';
  $handler->display->display_options['filters']['field_area_of_study_tid']['expose']['operator'] = 'field_area_of_study_tid_op';
  $handler->display->display_options['filters']['field_area_of_study_tid']['expose']['identifier'] = 'field_area_of_study_tid';
  $handler->display->display_options['filters']['field_area_of_study_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_of_study_tid']['vocabulary'] = 'area_of_study';
  /* Filter criterion: Content: Campus (field_campus) */
  $handler->display->display_options['filters']['field_campus_tid']['id'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['table'] = 'field_data_field_campus';
  $handler->display->display_options['filters']['field_campus_tid']['field'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['value'] = '';
  $handler->display->display_options['filters']['field_campus_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_campus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator_id'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['label'] = 'Campus Location';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['operator'] = 'field_campus_tid_op';
  $handler->display->display_options['filters']['field_campus_tid']['expose']['identifier'] = 'field_campus_tid';
  $handler->display->display_options['filters']['field_campus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_campus_tid']['vocabulary'] = 'campus';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'program' => 'program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Indiv. Listing Coursework */
  $handler = $view->new_display('block', 'Indiv. Listing Coursework', 'program_coursework');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coursework';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Courses (field_coursework) */
  $handler->display->display_options['relationships']['field_coursework_nid']['id'] = 'field_coursework_nid';
  $handler->display->display_options['relationships']['field_coursework_nid']['table'] = 'field_data_field_coursework';
  $handler->display->display_options['relationships']['field_coursework_nid']['field'] = 'field_coursework_nid';
  $handler->display->display_options['relationships']['field_coursework_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Code */
  $handler->display->display_options['fields']['field_code']['id'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code']['field'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['field_code']['label'] = '';
  $handler->display->display_options['fields']['field_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_code']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Minimum Credits */
  $handler->display->display_options['fields']['field_minimum_credits']['id'] = 'field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['table'] = 'field_data_field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['field'] = 'field_minimum_credits';
  $handler->display->display_options['fields']['field_minimum_credits']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['field_minimum_credits']['label'] = '';
  $handler->display->display_options['fields']['field_minimum_credits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minimum_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimum_credits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Maximum Credits */
  $handler->display->display_options['fields']['field_maximum_credits']['id'] = 'field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['table'] = 'field_data_field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['field'] = 'field_maximum_credits';
  $handler->display->display_options['fields']['field_maximum_credits']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['field_maximum_credits']['label'] = '';
  $handler->display->display_options['fields']['field_maximum_credits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_credits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maximum_credits']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Description Display */
  $handler->display->display_options['fields']['field_description_display']['id'] = 'field_description_display';
  $handler->display->display_options['fields']['field_description_display']['table'] = 'field_data_field_description_display';
  $handler->display->display_options['fields']['field_description_display']['field'] = 'field_description_display';
  $handler->display->display_options['fields']['field_description_display']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['field_description_display']['label'] = '';
  $handler->display->display_options['fields']['field_description_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description_display']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_display']['empty'] = '[body]';
  $handler->display->display_options['fields']['field_description_display']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Read more';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_code] [title] ([field_minimum_credits]-[field_maximum_credits])
[field_description_display] [title_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Code (field_code) */
  $handler->display->display_options['sorts']['field_code_value']['id'] = 'field_code_value';
  $handler->display->display_options['sorts']['field_code_value']['table'] = 'field_data_field_code';
  $handler->display->display_options['sorts']['field_code_value']['field'] = 'field_code_value';
  $handler->display->display_options['sorts']['field_code_value']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Indiv. Listing Faculty */
  $handler = $view->new_display('block', 'Indiv. Listing Faculty', 'program_faculty');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Faculty (field_faculty) */
  $handler->display->display_options['relationships']['field_faculty_nid']['id'] = 'field_faculty_nid';
  $handler->display->display_options['relationships']['field_faculty_nid']['table'] = 'field_data_field_faculty';
  $handler->display->display_options['relationships']['field_faculty_nid']['field'] = 'field_faculty_nid';
  $handler->display->display_options['relationships']['field_faculty_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_faculty_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_faculty_nid';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_faculty_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Indiv. Listing Student Orgs */
  $handler = $view->new_display('block', 'Indiv. Listing Student Orgs', 'program_student_organizations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Student Organizations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Student Organizations (field_student_organizations) */
  $handler->display->display_options['relationships']['field_student_organizations_nid']['id'] = 'field_student_organizations_nid';
  $handler->display->display_options['relationships']['field_student_organizations_nid']['table'] = 'field_data_field_student_organizations';
  $handler->display->display_options['relationships']['field_student_organizations_nid']['field'] = 'field_student_organizations_nid';
  $handler->display->display_options['relationships']['field_student_organizations_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_student_organizations_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_student_organizations_nid';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_student_organizations_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Related financial aids */
  $handler = $view->new_display('block', 'Related financial aids', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related financial aid';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Content';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no financial aid available.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Scholarship Opportunities (field_scholarship_opportunities) */
  $handler->display->display_options['relationships']['field_scholarship_opportunities_nid']['id'] = 'field_scholarship_opportunities_nid';
  $handler->display->display_options['relationships']['field_scholarship_opportunities_nid']['table'] = 'field_data_field_scholarship_opportunities';
  $handler->display->display_options['relationships']['field_scholarship_opportunities_nid']['field'] = 'field_scholarship_opportunities_nid';
  $handler->display->display_options['relationships']['field_scholarship_opportunities_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_scholarship_opportunities_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_scholarship_opportunities_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_scholarship_opportunities_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_scholarship_opportunities_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $translatables['program_directory'] = array(
    t('Master'),
    t('Faculty'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No Content'),
    t('Sorry, No programs found'),
    t('Title'),
    t('Campus (field_campus)'),
    t('All'),
    t('Faculty (field_faculty)'),
    t('Related courses'),
    t('Coursework'),
    t('Sorry, no courses found'),
    t('field_coursework'),
    t('Related jobs'),
    t('Career Options'),
    t('Sorry, no jobs found'),
    t('field_careers_and_internships'),
    t('Block Listing'),
    t('Undergraduate Major or Programs'),
    t('Fact Sheet'),
    t('Minor'),
    t('Campus Location'),
    t('Area of Study'),
    t('Indiv. Listing Coursework'),
    t('[body]'),
    t('Read more'),
    t('[field_code] [title] ([field_minimum_credits]-[field_maximum_credits])
[field_description_display] [title_1]'),
    t('Indiv. Listing Faculty'),
    t('field_faculty'),
    t('Indiv. Listing Student Orgs'),
    t('Student Organizations'),
    t('field_student_organizations'),
    t('Related financial aids'),
    t('Related financial aid'),
    t('Sorry, no financial aid available.'),
    t('field_scholarship_opportunities'),
  );
  $export['program_directory'] = $view;

  $view = new view();
  $view->name = 'program_node_expander';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Program Node Expander';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Major Page */
  $handler->display->display_options['fields']['field_major_page']['id'] = 'field_major_page';
  $handler->display->display_options['fields']['field_major_page']['table'] = 'field_data_field_major_page';
  $handler->display->display_options['fields']['field_major_page']['field'] = 'field_major_page';
  $handler->display->display_options['fields']['field_major_page']['label'] = 'Major/Minor';
  $handler->display->display_options['fields']['field_major_page']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_major_page']['settings'] = array(
    'node_reference_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_major_page']['delta_offset'] = '0';
  /* Field: Content: Faculty */
  $handler->display->display_options['fields']['field_faculty']['id'] = 'field_faculty';
  $handler->display->display_options['fields']['field_faculty']['table'] = 'field_data_field_faculty';
  $handler->display->display_options['fields']['field_faculty']['field'] = 'field_faculty';
  $handler->display->display_options['fields']['field_faculty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faculty']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_faculty']['settings'] = array(
    'node_reference_view_mode' => 'search_result',
  );
  $handler->display->display_options['fields']['field_faculty']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'program' => 'program',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['program_node_expander'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Major/Minor'),
    t('Faculty'),
    t('All'),
    t('Block'),
  );
  $export['program_node_expander'] = $view;

  $view = new view();
  $view->name = 'related_rooms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Rooms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Rooms';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_room']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'course' => 'course',
  );

  /* Display: Courses */
  $handler = $view->new_display('block', 'Courses', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Programs */
  $handler = $view->new_display('block', 'Programs', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related rooms';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are no rooms available';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Courses (field_coursework) */
  $handler->display->display_options['relationships']['field_coursework_nid']['id'] = 'field_coursework_nid';
  $handler->display->display_options['relationships']['field_coursework_nid']['table'] = 'field_data_field_coursework';
  $handler->display->display_options['relationships']['field_coursework_nid']['field'] = 'field_coursework_nid';
  $handler->display->display_options['relationships']['field_coursework_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_coursework_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Room */
  $handler->display->display_options['fields']['field_room']['id'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['table'] = 'field_data_field_room';
  $handler->display->display_options['fields']['field_room']['field'] = 'field_room';
  $handler->display->display_options['fields']['field_room']['relationship'] = 'field_coursework_nid';
  $handler->display->display_options['fields']['field_room']['label'] = '';
  $handler->display->display_options['fields']['field_room']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_room']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_room']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'program' => 'program',
  );
  $translatables['related_rooms'] = array(
    t('Master'),
    t('Course Rooms'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Courses'),
    t('Programs'),
    t('Related rooms'),
    t('There are no rooms available'),
    t('field_coursework'),
  );
  $export['related_rooms'] = $view;

  return $export;
}
