<?php
/**
 * @file
 * f_candidate_details.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_candidate_details_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_candidate_details_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_candidate_details_node_info() {
  $items = array(
    'ct_candidate_details' => array(
      'name' => t('Candidate Details'),
      'base' => 'node_content',
      'description' => t('Holds details of a candidate (shortlisted or selected) nominated for elections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<p><strong>Read and follow the below steps for creating content</strong></p>
<p>
<ol>
<li>Every field is made non-compulsory to allow adding the data flexibly (in case some data for some candidates is missing). But it is HIGHLY recommended that you add AS MANY details as you can enter for each candidate.</li>
<li>Title = Enter candidate\'s full name followed by the constituency name here. Eg = "Kumar Vishwas - Amethi" (without quotes). Make sure the spelling of the constituency name is same as that which automatically shows in the Parliament Constituency field when you start typing.</li>
<li>Candidate Description = This is the place where you can enter paragraph style of data. Any alternate hindi data should also go in this field. NOTE: Please leave the \'summary\' field (similar to the candidate description\' field blank.</li>
<li>All other fields = Enter data in them as per the instructions given just below that particular field.</li>
<li><strong>*important*</strong> Meta tags (page title) = Replace the default value here ([node:title] | [site:name]) with the value <strong>[node:field_cd_name] | [node:field_cd_pc] Constituency Candidate | India Lok Sabha Elections 2014 | [site:name]</strong></li>
<li>URL path settings, Revision Information, Authoring Information = Leave default </li>
<li>Publishing Options = It is recommended that you save the content without publishing it first. This will give you a better preview of the cotent, then you can \'EDIT\' the content again, and publish it if everything is alright</li>
<li><a href="https://github.com/AamAadmiParty/india-standalone-drupal/issues/80#issuecomment-32337755" target="_blank">Click here to look at a sample of how the final content should look like.</a></li>
</ol>
</p>
'),
    ),
  );
  return $items;
}
