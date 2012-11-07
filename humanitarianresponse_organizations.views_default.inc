<?php
/**
 * @file
 * humanitarianresponse_organizations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_organizations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'organizations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Acronym */
  $handler->display->display_options['fields']['field_organization_acronym']['id'] = 'field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['table'] = 'field_data_field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['field'] = 'field_organization_acronym';
  /* Field: Taxonomy term: Website */
  $handler->display->display_options['fields']['field_organization_website']['id'] = 'field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['table'] = 'field_data_field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['field'] = 'field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['click_sort_column'] = 'url';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'organizations' => 'organizations',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'organizations';

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'organizations.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Acronym */
  $handler->display->display_options['fields']['field_organization_acronym']['id'] = 'field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['table'] = 'field_data_field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['field'] = 'field_organization_acronym';
  /* Field: Taxonomy term: Website */
  $handler->display->display_options['fields']['field_organization_website']['id'] = 'field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['table'] = 'field_data_field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['field'] = 'field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['click_sort_column'] = 'url';
  $handler->display->display_options['path'] = 'organizations/xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'xml');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Acronym */
  $handler->display->display_options['fields']['field_organization_acronym']['id'] = 'field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['table'] = 'field_data_field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['field'] = 'field_organization_acronym';
  /* Field: Taxonomy term: Website */
  $handler->display->display_options['fields']['field_organization_website']['id'] = 'field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['table'] = 'field_data_field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['field'] = 'field_organization_website';
  $handler->display->display_options['fields']['field_organization_website']['click_sort_column'] = 'url';
  $handler->display->display_options['path'] = 'organizations/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['organizations'] = array(
    t('Master'),
    t('Organizations'),
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
    t('Name'),
    t('Type'),
    t('Acronym'),
    t('Website'),
    t('Page'),
    t('XLS'),
    t('XML'),
  );
  $export['organizations'] = $view;

  return $export;
}
