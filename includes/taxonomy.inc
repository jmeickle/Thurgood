<?php
// Based on a suggestion from:
// http://tiger-fish.com/blog/creating-vocabularies-and-terms-when-installing-drupal-module

function juice_install() {


drupal_load('module', 'taxonomy');

  module_load_include('module', 'taxonomy', 'taxonomy');
  $t = get_t();
 
  // Create the vocabulary programatically.
  $vocab = array(
    'name' => 'Juice type',
    'description' => $t('The type of juice, such as apple or orange.'),
    'help' => 0,
    'relations' => 0,
    'hierarchy' => 0,
    'multiple' => 0,
    'required' => 1,
    'tags' => 0,
    'module' => 'taxonomy',
    'weight' => 0,
    'nodes' => array('juice' => 1),
  );

 
  taxonomy_save_vocabulary($vocab);
 
  // Get the vid of the vocabulary we just created.
  $vid = db_result(
    db_query(
      "SELECT vid FROM {vocabulary} WHERE name = '%s'",
      'Juice type'
    )
  );
 
  // Create the term programatically.
  $term = array(
    'name' => 'Orange',
    'vid' => $vid,
    'description' => $t('Orange juice is made from oranges. It is sweet and usually orange in colour.'),
  );
/**
$term = array(
'vid' => 5, // Voacabulary ID
'name' => 'Drupal', // Term Name
'synonyms' => 'Druplet', // (Optional) Synonym of this term
'parent' => array(11), // (Optional) Term ID of a parent term
'relations' => array(15), // (Optional) Related Term IDs
);
description
weight
**/
 
  taxonomy_save_term($term);
}
?>
