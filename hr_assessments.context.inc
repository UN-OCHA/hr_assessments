<?php
/**
 * @file
 * hr_assessments.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_assessments_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_assessments_space';
  $context->description = '';
  $context->tag = 'Assessments';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hr_assessments:master' => 'hr_assessments:master',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_assessments-master' => array(
          'module' => 'views',
          'delta' => '-exp-hr_assessments-master',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'current_search-hr_current_search' => array(
          'module' => 'current_search',
          'delta' => 'hr_current_search',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ' => array(
          'module' => 'facetapi',
          'delta' => 'ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-MOMhTUv0Q9alQbixPzg3lFUS6pPxK0rB' => array(
          'module' => 'facetapi',
          'delta' => 'MOMhTUv0Q9alQbixPzg3lFUS6pPxK0rB',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17' => array(
          'module' => 'facetapi',
          'delta' => 'uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-1HNQlvc1ua7nibn1p0BYfy1NlO1GM326' => array(
          'module' => 'facetapi',
          'delta' => '1HNQlvc1ua7nibn1p0BYfy1NlO1GM326',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-9sJg2kkCGYsSkbb4gf3WycCePRuSTnD6' => array(
          'module' => 'facetapi',
          'delta' => '9sJg2kkCGYsSkbb4gf3WycCePRuSTnD6',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-P5hhFJqzUZdQ733kfRm5W7TjJpSOacnI' => array(
          'module' => 'facetapi',
          'delta' => 'P5hhFJqzUZdQ733kfRm5W7TjJpSOacnI',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments');
  $export['hr_assessments_space'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_assessments_space_map';
  $context->description = '';
  $context->tag = 'Assessments';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hr_assessments:map' => 'hr_assessments:map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_assessments-map' => array(
          'module' => 'views',
          'delta' => '-exp-hr_assessments-map',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'current_search-hr_current_search' => array(
          'module' => 'current_search',
          'delta' => 'hr_current_search',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ' => array(
          'module' => 'facetapi',
          'delta' => 'ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-MOMhTUv0Q9alQbixPzg3lFUS6pPxK0rB' => array(
          'module' => 'facetapi',
          'delta' => 'MOMhTUv0Q9alQbixPzg3lFUS6pPxK0rB',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17' => array(
          'module' => 'facetapi',
          'delta' => 'uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-1HNQlvc1ua7nibn1p0BYfy1NlO1GM326' => array(
          'module' => 'facetapi',
          'delta' => '1HNQlvc1ua7nibn1p0BYfy1NlO1GM326',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-9sJg2kkCGYsSkbb4gf3WycCePRuSTnD6' => array(
          'module' => 'facetapi',
          'delta' => '9sJg2kkCGYsSkbb4gf3WycCePRuSTnD6',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-P5hhFJqzUZdQ733kfRm5W7TjJpSOacnI' => array(
          'module' => 'facetapi',
          'delta' => 'P5hhFJqzUZdQ733kfRm5W7TjJpSOacnI',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments');
  $export['hr_assessments_space_map'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hr_assessments_space_table';
  $context->description = '';
  $context->tag = 'Assessments';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'hr_assessments:table' => 'hr_assessments:table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-hr_assessments-table' => array(
          'module' => 'views',
          'delta' => '-exp-hr_assessments-table',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'current_search-hr_current_search' => array(
          'module' => 'current_search',
          'delta' => 'hr_current_search',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-sp6ljjoCBKBVws0uia1DCKcDmln6TeUq' => array(
          'module' => 'facetapi',
          'delta' => 'sp6ljjoCBKBVws0uia1DCKcDmln6TeUq',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ' => array(
          'module' => 'facetapi',
          'delta' => 'ZXNTNWz3w05hh3aLGFw0ofPRZUa5biIZ',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-MOMhTUv0Q9alQbixPzg3lFUS6pPxK0rB' => array(
          'module' => 'facetapi',
          'delta' => 'MOMhTUv0Q9alQbixPzg3lFUS6pPxK0rB',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17' => array(
          'module' => 'facetapi',
          'delta' => 'uulIYjH3ZtSu9hhI5ARgBYQeEUNqWe17',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-1HNQlvc1ua7nibn1p0BYfy1NlO1GM326' => array(
          'module' => 'facetapi',
          'delta' => '1HNQlvc1ua7nibn1p0BYfy1NlO1GM326',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-9sJg2kkCGYsSkbb4gf3WycCePRuSTnD6' => array(
          'module' => 'facetapi',
          'delta' => '9sJg2kkCGYsSkbb4gf3WycCePRuSTnD6',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-P5hhFJqzUZdQ733kfRm5W7TjJpSOacnI' => array(
          'module' => 'facetapi',
          'delta' => 'P5hhFJqzUZdQ733kfRm5W7TjJpSOacnI',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Assessments');
  $export['hr_assessments_space_table'] = $context;

  return $export;
}
