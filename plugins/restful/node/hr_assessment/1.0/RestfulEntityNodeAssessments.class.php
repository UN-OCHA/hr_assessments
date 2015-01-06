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
        'hr_organization' => array(
          'name' => 'organizations',
          'full_view' => FALSE,
        ),
      ),
    );

    $public_fields['participating_organizations'] = array(
      'property' => 'field_organizations2',
      'resource' => array(
        'hr_organization' => array(
          'name' => 'organizations',
          'full_view' => FALSE,
        ),
      ),
    );

    $public_fields['locations'] = array(
      'property' => 'field_locations',
      'resource' => array(
        'hr_location' => array(
          'name' => 'locations',
          'full_view' => FALSE,
        ),
      ),
    );

    $public_fields['other_location'] = array(
      'property' => 'field_asst_other_location',
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
