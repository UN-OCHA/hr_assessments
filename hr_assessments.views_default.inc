<?php
/**
 * @file
 * hr_assessments.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_assessments_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hr_assessments';
  $view->description = '';
  $view->tag = 'Contacts';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Assessments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no results';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Locations */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_locations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_locations']['bypass_access'] = 0;
  /* Field: Indexed Node: Leading/Coordinating Organizations */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations']['bypass_access'] = 0;
  /* Field: Indexed Node: Participating Organizations */
  $handler->display->display_options['fields']['field_organizations2']['id'] = 'field_organizations2';
  $handler->display->display_options['fields']['field_organizations2']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_organizations2']['field'] = 'field_organizations2';
  $handler->display->display_options['fields']['field_organizations2']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations2']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations2']['bypass_access'] = 0;
  /* Field: Indexed Node: Clusters/Sectors */
  $handler->display->display_options['fields']['field_bundles']['id'] = 'field_bundles';
  $handler->display->display_options['fields']['field_bundles']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_bundles']['field'] = 'field_bundles';
  $handler->display->display_options['fields']['field_bundles']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_bundles']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bundles']['bypass_access'] = 0;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_asst_status']['id'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_asst_status']['field'] = 'field_asst_status';
  /* Field: Indexed Node: Date */
  $handler->display->display_options['fields']['field_asst_date']['id'] = 'field_asst_date';
  $handler->display->display_options['fields']['field_asst_date']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_asst_date']['field'] = 'field_asst_date';
  $handler->display->display_options['fields']['field_asst_date']['settings'] = array(
    'format_type' => 'hr_1',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Indexed Node: Assessment Report */
  $handler->display->display_options['fields']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_asst_report']['field'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['label'] = 'Report';
  $handler->display->display_options['fields']['field_asst_report']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['display'] = 'view';
  $handler->display->display_options['fields']['field_asst_report']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_report']['bypass_access'] = 0;
  /* Field: Indexed Node: Assessment Questionnaire */
  $handler->display->display_options['fields']['field_asst_questionnaire']['id'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_asst_questionnaire']['field'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['label'] = 'Questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['display'] = 'view';
  $handler->display->display_options['fields']['field_asst_questionnaire']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_questionnaire']['bypass_access'] = 0;
  /* Field: Indexed Node: Assessment Data */
  $handler->display->display_options['fields']['field_asst_data']['id'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_asst_data']['field'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['label'] = 'Data';
  $handler->display->display_options['fields']['field_asst_data']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['display'] = 'view';
  $handler->display->display_options['fields']['field_asst_data']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_asst_data']['bypass_access'] = 0;
  /* Contextual filter: Indexed Node: Space(s) */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hr_assessment' => 'hr_assessment',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search Assessments';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'master');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/assessments';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/assessments/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'table');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_bundles' => 'field_bundles',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_email' => 'field_email',
    'field_job_title' => 'field_job_title',
    'field_organizations' => 'field_organizations',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_bundles' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organizations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/assessments/table';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'csv');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Clusters/Sectors */
  $handler->display->display_options['fields']['field_bundles']['id'] = 'field_bundles';
  $handler->display->display_options['fields']['field_bundles']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_bundles']['field'] = 'field_bundles';
  $handler->display->display_options['fields']['field_bundles']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_bundles']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_bundles']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bundles']['bypass_access'] = 0;
  /* Field: Indexed Node: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Indexed Node: Main Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Indexed Node: Phones */
  $handler->display->display_options['fields']['field_phones']['id'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_phones']['field'] = 'field_phones';
  $handler->display->display_options['fields']['field_phones']['click_sort_column'] = 'numbertype';
  $handler->display->display_options['fields']['field_phones']['settings'] = array(
    'components' => array(
      'country' => 0,
      'numbertype' => 0,
    ),
    'full_hcard' => 0,
    'as_tel_link' => 0,
    'raw' => 1,
    'allow_alpha' => 0,
    'country_name_position' => 'after',
    'numbertype_position' => 'before',
  );
  $handler->display->display_options['fields']['field_phones']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phones']['separator'] = ';';
  /* Field: Indexed Node: Leading/Coordinating Organizations */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations']['bypass_access'] = 0;
  /* Field: Indexed Node: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_job_title']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_job_title']['bypass_access'] = 0;
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_location']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_location']['bypass_access'] = 0;
  /* Field: Indexed Node: Coordination hubs */
  $handler->display->display_options['fields']['field_coordination_hubs']['id'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_coordination_hubs']['field'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_coordination_hubs']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_coordination_hubs']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_coordination_hubs']['bypass_access'] = 0;
  /* Field: Indexed Node: Funding methods */
  $handler->display->display_options['fields']['field_funding_methods']['id'] = 'field_funding_methods';
  $handler->display->display_options['fields']['field_funding_methods']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_funding_methods']['field'] = 'field_funding_methods';
  $handler->display->display_options['fields']['field_funding_methods']['label'] = 'Fundings';
  $handler->display->display_options['fields']['field_funding_methods']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_funding_methods']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_funding_methods']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_funding_methods']['bypass_access'] = 0;
  /* Field: Indexed Node: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_themes']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_themes']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_themes']['bypass_access'] = 0;
  /* Field: Indexed Node: Emergencies */
  $handler->display->display_options['fields']['field_disasters']['id'] = 'field_disasters';
  $handler->display->display_options['fields']['field_disasters']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_disasters']['field'] = 'field_disasters';
  $handler->display->display_options['fields']['field_disasters']['list']['separator'] = ';';
  $handler->display->display_options['fields']['field_disasters']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_disasters']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_disasters']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'node/%/assessments/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'master' => 0,
    'list' => 0,
    'table' => 0,
    'map' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Map data */
  $handler = $view->new_display('openlayers', 'Map data', 'map_data');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'field_location_field_geofield_lat',
    'other_lon' => 'field_location_field_geofield_lon',
    'wkt' => 'field_location_field_geofield_lon',
    'other_top' => 'field_location_field_geofield_lon',
    'other_right' => 'field_location_field_geofield_lon',
    'other_bottom' => 'field_location_field_geofield_lon',
    'other_left' => 'field_location_field_geofield_lon',
    'name_field' => 'nothing',
    'description_field' => 'field_organizations',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location » Geofield: Longitude (indexed) */
  $handler->display->display_options['fields']['field_location_field_geofield_lon']['id'] = 'field_location_field_geofield_lon';
  $handler->display->display_options['fields']['field_location_field_geofield_lon']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_location_field_geofield_lon']['field'] = 'field_location_field_geofield_lon';
  $handler->display->display_options['fields']['field_location_field_geofield_lon']['label'] = '';
  $handler->display->display_options['fields']['field_location_field_geofield_lon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_field_geofield_lon']['precision'] = '0';
  $handler->display->display_options['fields']['field_location_field_geofield_lon']['separator'] = '';
  $handler->display->display_options['fields']['field_location_field_geofield_lon']['link_to_entity'] = 0;
  /* Field: Location » Geofield: Latitude (indexed) */
  $handler->display->display_options['fields']['field_location_field_geofield_lat']['id'] = 'field_location_field_geofield_lat';
  $handler->display->display_options['fields']['field_location_field_geofield_lat']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_location_field_geofield_lat']['field'] = 'field_location_field_geofield_lat';
  $handler->display->display_options['fields']['field_location_field_geofield_lat']['label'] = '';
  $handler->display->display_options['fields']['field_location_field_geofield_lat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_field_geofield_lat']['precision'] = '0';
  $handler->display->display_options['fields']['field_location_field_geofield_lat']['separator'] = '';
  $handler->display->display_options['fields']['field_location_field_geofield_lat']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Leading/Coordinating Organizations */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = '';
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organizations']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_organizations']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organizations']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organizations']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Space(s) */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hr_assessment' => 'hr_assessment',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search Assessments';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Location » Geofield: Latitude (indexed) */
  $handler->display->display_options['filters']['field_location_field_geofield_lat']['id'] = 'field_location_field_geofield_lat';
  $handler->display->display_options['filters']['field_location_field_geofield_lat']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_location_field_geofield_lat']['field'] = 'field_location_field_geofield_lat';
  $handler->display->display_options['filters']['field_location_field_geofield_lat']['operator'] = 'not empty';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'map');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'hr_contacts';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/assessments/map';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['hr_assessments'] = array(
    t('Master'),
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
    t('There are no results'),
    t('Title'),
    t('Locations'),
    t('Organization'),
    t('Participating Organizations'),
    t('Clusters/Sectors'),
    t('Status'),
    t('Date'),
    t('Report'),
    t('Questionnaire'),
    t('Data'),
    t('All'),
    t('Search Assessments'),
    t('List'),
    t('Table'),
    t('CSV'),
    t('First name'),
    t('Last name'),
    t('Main Email'),
    t('Phones'),
    t('Leading/Coordinating Organizations'),
    t('Job Title'),
    t('Location'),
    t('Coordination hubs'),
    t('Fundings'),
    t('Themes'),
    t('Emergencies'),
    t('Map data'),
    t('.'),
    t('Map'),
  );
  $export['hr_assessments'] = $view;

  $view = new view();
  $view->name = 'hr_geographic_levels';
  $view->description = '';
  $view->tag = 'disasters';
  $view->base_table = 'node';
  $view->human_name = 'Geographic Levels';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
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
    'hr_geographic_level' => 'hr_geographic_level',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['hr_geographic_levels'] = array(
    t('Master'),
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
    t('All'),
    t('Entity Reference'),
  );
  $export['hr_geographic_levels'] = $view;

  return $export;
}
