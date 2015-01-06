<?php

/**
 * @file
 * Contains \RestfulEntityNodeAssessments.
 */

class RestfulEntityNodeAssessments extends \RestfulEntityBaseNode {

  /**
   * Overrides RestfulEntityBaseNode::addExtraInfoToQuery()
   * 
   * Adds proper query tags
   */
  protected function addExtraInfoToQuery($query) {
    parent::addExtraInfoToQuery($query);
    $filters = $this->parseRequestForListFilter();
    if (!empty($filters)) {
      foreach ($query->tags as $i => $tag) {
        if ($tag == 'node_access') {
          unset($query->tags[$i]);
        }
      }
      $query->addTag('entity_field_access');
    }
  }

  /**
   * Overrides \RestfulEntityBase::publicFieldsInfo().
   */
  public function publicFieldsInfo() {
    $public_fields = parent::publicFieldsInfo();

    $public_fields['bundles'] = array(
      'property' => 'field_bundles',
      'resource' => array(
        'hr_bundle' => 'bundles',
      ),
      'process_callbacks' => array(array($this, 'getEntity')),
    );

    $public_fields['organizations'] = array(
      'property' => 'field_organizations',
      'resource' => array(
        'hr_organization' => 'organizations',
      ),
      'process_callbacks' => array(array($this, 'getEntity')),
    );

    $public_fields['participating_organizations'] = array(
      'property' => 'field_organizations2',
      'resource' => array(
        'hr_organization' => 'organizations',
      ),
      'process_callbacks' => array(array($this, 'getEntity')),
    );

    $public_fields['locations'] = array(
      'property' => 'field_locations',
      'resource' => array(
        'hr_location' => 'locations',
      ),
      'process_callbacks' => array(array($this, 'getEntity')),
    );

    $public_fields['other_location'] = array(
      'property' => 'field_asst_other_location',
    );

    $public_fields['subject'] = array(
      'property' => 'field_asst_subject',
    );

    $public_fields['methodology'] = array(
      'property' => 'field_asst_methodology',
    );

    $public_fields['key_findings'] = array(
      'property' => 'field_asst_key_findings',
    );

    $public_fields['unit_measurement'] = array(
      'property' => 'field_asst_unit',
    );

    $public_fields['collection_method'] = array(
      'property' => 'field_asst_collection_method',
    );

    $public_fields['sample_size'] = array(
      'property' => 'field_asst_sample_size',
    );

    /*$public_fields['address'] = array(
      'property' => 'field_address',
    );

    $public_fields['phones'] = array(
      'property' => 'field_phones',
    );

    $public_fields['email'] = array(
      'property' => 'field_email',
    );

    $public_fields['operation'] = array(
      'property' => 'og_group_ref',
      'resource' => array(
        'hr_operation' => 'operations',
      ),
    );*/

    return $public_fields;
  }

  protected function getEntity($wrapper) {
    foreach ($wrapper as &$item) {
      $array_item = (array)$item;
      $properties = array_keys($array_item);
      foreach ($properties as $property) {
        if (!in_array($property, array('id', 'label', 'self'))) {
          unset($array_item[$property]);
        }
      }
      $item = (object)$array_item;
    }
    return $wrapper;
  }

}
