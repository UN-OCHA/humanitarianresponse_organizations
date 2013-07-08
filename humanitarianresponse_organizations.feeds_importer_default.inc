<?php
/**
 * @file
 * humanitarianresponse_organizations.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function humanitarianresponse_organizations_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_organization_types';
  $feeds_importer->config = array(
    'name' => 'CSV Organization types',
    'description' => 'Import organization types from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'bundle' => 'organization_types',
        'mappings' => array(
          0 => array(
            'source' => 'Name:en',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Name:en',
            'target' => 'name_field:et:en',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Name:fr',
            'target' => 'name_field:et:fr',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Name:es',
            'target' => 'name_field:et:es',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'UUID',
            'target' => 'uuid:uuid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['csv_organization_types'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_organizations';
  $feeds_importer->config = array(
    'name' => 'CSV Organizations',
    'description' => 'Import organizations from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'bundle' => 'organizations',
        'mappings' => array(
          0 => array(
            'source' => 'Name:en',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Name:en',
            'target' => 'name_field:et:en',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Name:fr',
            'target' => 'name_field:et:fr',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Name:es',
            'target' => 'name_field:et:es',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Type',
            'target' => 'field_organization_type',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Acronym:en',
            'target' => 'field_organization_acronym:et:und',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Acronym:en',
            'target' => 'field_organization_acronym:et:en',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Acronym:fr',
            'target' => 'field_organization_acronym:et:fr',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Acronym:es',
            'target' => 'field_organization_acronym:et:es',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Website',
            'target' => 'field_organization_website:url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'UUID',
            'target' => 'uuid:uuid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'vocabulary' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_organizations'] = $feeds_importer;

  return $export;
}
