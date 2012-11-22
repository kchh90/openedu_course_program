<?php
/**
 * @file
 * openedu_course_program.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function openedu_course_program_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_course_calendar',
        1 => 'field_campus',
        2 => 'field_completion_months',
      ),
      'program_banner' => array(
        0 => 'field_banner_image',
      ),
      'program_overview' => array(
        0 => 'body',
      ),
      'program_learning_environment' => array(
        0 => 'field_learning_environment',
      ),
      'program_major_minor' => array(
        0 => 'field_major_page',
      ),
      'program_research_video_demonstra' => array(
        0 => 'field_research_video_demo',
      ),
      'program_career_options' => array(
        0 => 'field_careers_and_internships',
      ),
    ),
    'fields' => array(
      'field_course_calendar' => 'ds_content',
      'field_campus' => 'ds_content',
      'field_completion_months' => 'ds_content',
      'field_banner_image' => 'program_banner',
      'body' => 'program_overview',
      'field_learning_environment' => 'program_learning_environment',
      'field_major_page' => 'program_major_minor',
      'field_research_video_demo' => 'program_research_video_demonstra',
      'field_careers_and_internships' => 'program_career_options',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|program|full'] = $ds_layout;

  return $export;
}
