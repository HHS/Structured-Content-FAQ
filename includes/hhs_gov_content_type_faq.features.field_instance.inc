<?php
/**
 * @file
 * hhs_gov_content_type_faq.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hhs_gov_content_type_faq_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-faq-field_created_by'.
  $field_instances['node-faq-field_created_by'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the office responsible for maintaining this content on HHS.gov.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_created_by',
    'label' => 'Created by',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 21,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_date_created'.
  $field_instances['node-faq-field_date_created'] = array(
    'bundle' => 'faq',
    'deleted' => 0,
    'description' => 'Leave the default, which will be today\'s date.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_created',
    'label' => 'Date Created',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_date_last_modfied'.
  $field_instances['node-faq-field_date_last_modfied'] = array(
    'bundle' => 'faq',
    'deleted' => 0,
    'description' => 'Enter the date this content was most recently reviewed and/or updated.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_last_modfied',
    'label' => 'Last Reviewed',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 20,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_audience'.
  $field_instances['node-faq-field_faq_audience'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the main target audience from the list (more than one is allowed in case 1-2 are needed).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_audience',
    'label' => 'Audience',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_careers'.
  $field_instances['node-faq-field_faq_careers'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose 1-2 parent categories from the list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_faq_careers',
    'label' => 'FAQ Careers',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_civil_rights'.
  $field_instances['node-faq-field_faq_civil_rights'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose 1-2 parent categories from the list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_civil_rights',
    'label' => 'FAQ Civil Rights',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_foia'.
  $field_instances['node-faq-field_faq_foia'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose 1-2 parent categories from the list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_foia',
    'label' => 'FAQ FOIA',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_full_answer'.
  $field_instances['node-faq-field_faq_full_answer'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Complete text of the answer; no character limit.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_full_answer',
    'label' => 'Full Answer',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_hipaa'.
  $field_instances['node-faq-field_faq_hipaa'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose 1-2 parent categories from the list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_hipaa',
    'label' => 'FAQ HIPAA',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_question'.
  $field_instances['node-faq-field_faq_question'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Recommended length: 100 characters or less, including spaces.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_question',
    'label' => 'Question',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_sub_category'.
  $field_instances['node-faq-field_faq_sub_category'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose 1 sub-category from the list',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_sub_category',
    'label' => 'FAQ Sub-Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_topics'.
  $field_instances['node-faq-field_faq_topics'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add keywords, separated by commas, to trigger the OneBox. The FAQ\'s short answer appears in the search result field when these terms are searched.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_topics',
    'label' => 'Topics',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_faq_travel'.
  $field_instances['node-faq-field_faq_travel'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose 1-2 parent categories from the list.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq_travel',
    'label' => 'FAQ Travel',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_related_questions'.
  $field_instances['node-faq-field_related_questions'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_related_questions',
    'label' => 'Related Questions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 22,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-faq-field_terms_category'.
  $field_instances['node-faq-field_terms_category'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_terms_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'taxonomy_term-faq_sub_category-field_term_category'.
  $field_instances['taxonomy_term-faq_sub_category-field_term_category'] = array(
    'bundle' => 'faq_sub_category',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_term_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 41,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add keywords, separated by commas, to trigger the OneBox. The FAQ\'s short answer appears in the search result field when these terms are searched.');
  t('Audience');
  t('Category');
  t('Choose 1 sub-category from the list');
  t('Choose 1-2 parent categories from the list.');
  t('Choose the main target audience from the list (more than one is allowed in case 1-2 are needed).');
  t('Complete text of the answer; no character limit.');
  t('Created by');
  t('Date Created');
  t('Enter the date this content was most recently reviewed and/or updated.');
  t('FAQ Careers');
  t('FAQ Civil Rights');
  t('FAQ FOIA');
  t('FAQ HIPAA');
  t('FAQ Sub-Category');
  t('FAQ Travel');
  t('Full Answer');
  t('Last Reviewed');
  t('Leave the default, which will be today\'s date.');
  t('Question');
  t('Recommended length: 100 characters or less, including spaces.');
  t('Related Questions');
  t('Select the office responsible for maintaining this content on HHS.gov.');
  t('Topics');

  return $field_instances;
}
