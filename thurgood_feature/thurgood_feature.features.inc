<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function thurgood_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function thurgood_feature_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'module' => 'features',
      'description' => t('An <i>Article</i> is a generic piece of website content, such as a news item or a blog post.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '25',
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('An <em>Event</em> occurs at specific time and place. It can be a one-off gathering, or a regularly scheduled meeting.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '25',
      'help' => '',
    ),
    'organization' => array(
      'name' => t('Organization'),
      'module' => 'features',
      'description' => t('Filler'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Filler'),
    ),
    'person' => array(
      'name' => t('Person'),
      'module' => 'features',
      'description' => t('Filler'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Filler'),
    ),
    'place' => array(
      'name' => t('Place'),
      'module' => 'features',
      'description' => t('A <b>Place</b> is a physical location, such as an office or a church.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '25',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function thurgood_feature_rules_defaults() {
  return array(
    'rules' => array(
      'rules_thurgood_check_revisions' => array(
        '#type' => 'rule',
        '#set' => 'event_node_update',
        '#label' => 'If saved content is not live already, but has no pending revisions, set its workflow status to live.',
        '#active' => 1,
        '#weight' => '10',
        '#categories' => array(
          '0' => 'revision',
          '1' => 'workflow',
          'thurgood_feature' => 'thurgood_feature',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#settings' => array(
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
            '#name' => 'revisioning_node_has_pending',
            '#info' => array(
              'label' => 'Content "updated content" has pending revision(s)',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Revisioning',
            ),
            '#weight' => 0,
            '#negate' => 1,
          ),
          '1' => array(
            '#type' => 'condition',
            '#settings' => array(
              'revision_type' => array(
                '1' => '1',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'revisioning_condition_revision_is',
            '#info' => array(
              'label' => 'Revision status of updated content is: Current, published',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Revisioning',
            ),
            '#weight' => 0,
          ),
          '2' => array(
            '#negate' => 1,
            '#weight' => 0,
            '#info' => array(
              'label' => 'Check if content workflow state is live',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Node',
                ),
              ),
              'module' => 'Workflow',
            ),
            '#name' => 'workflow_check_state',
            '#settings' => array(
              'state' => array(
                '6' => '6',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'module' => 'Workflow',
              'arguments' => array(
                'node' => array(
                  'label' => 'Content',
                  'type' => 'node',
                ),
              ),
              'label' => 'Change workflow state of content to new state',
              'base' => 'rules_core_action_execute',
              'action_name' => 'workflow_select_given_state_action',
              'configurable' => TRUE,
            ),
            '#name' => 'rules_core_workflow_select_given_state_action',
            '#settings' => array(
              'target_sid' => '6',
              'state_name' => 'live',
              'force' => 1,
              'workflow_comment' => '%title was automatically set to %state because it has a published revision with no pending revisions.',
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_thurgood_push_draft' => array(
        '#type' => 'rule',
        '#set' => 'event_node_update',
        '#label' => 'If a user edits an approved/scheduled/live node but has insufficient permissions, downgrade the node to a draft.',
        '#active' => 1,
        '#weight' => '-5',
        '#categories' => array(
          '0' => 'revision',
          '1' => 'workflow',
          'thurgood_feature' => 'thurgood_feature',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '1' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Check if content workflow state is granted approval, scheduled to go live, live',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Node',
                ),
              ),
              'module' => 'Workflow',
            ),
            '#name' => 'workflow_check_state',
            '#settings' => array(
              'state' => array(
                '4' => '4',
                '5' => '5',
                '6' => '6',
              ),
              '#argument map' => array(
                'node' => 'node_unchanged',
              ),
            ),
            '#type' => 'condition',
          ),
          '2' => array(
            '#settings' => array(
              'roles' => array(
                '0' => 3,
                '1' => 6,
                '2' => 10,
              ),
              'operation' => 'OR',
              '#argument map' => array(
                'user' => 'user',
              ),
            ),
            '#type' => 'condition',
            '#name' => 'rules_condition_user_hasrole',
            '#info' => array(
              'label' => 'User has role(s)',
              'arguments' => array(
                'user' => array(
                  'type' => 'user',
                  'label' => 'User',
                ),
              ),
              'module' => 'User',
            ),
            '#weight' => 0,
            '#negate' => 1,
          ),
          '3' => array(
            '#type' => 'condition',
            '#settings' => array(
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'revisioning_node_has_pending',
            '#info' => array(
              'label' => 'Content "updated content" has pending revision(s)',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Revisioning',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'module' => 'Workflow',
              'arguments' => array(
                'node' => array(
                  'label' => 'Content',
                  'type' => 'node',
                ),
              ),
              'label' => 'Change workflow state of content to new state',
              'base' => 'rules_core_action_execute',
              'action_name' => 'workflow_select_given_state_action',
              'configurable' => TRUE,
            ),
            '#name' => 'rules_core_workflow_select_given_state_action',
            '#settings' => array(
              'target_sid' => '2',
              'state_name' => 'draft',
              'force' => 1,
              'workflow_comment' => '%title was automatically set to %state because it was edited by a non-administrator.',
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_thurgood_push_live' => array(
        '#type' => 'rule',
        '#set' => 'event_workflow_state_changed',
        '#label' => 'When content becomes scheduled for live, push it to live.',
        '#active' => 1,
        '#weight' => '10',
        '#categories' => array(
          '0' => 'revision',
          '1' => 'workflow',
          'thurgood_feature' => 'thurgood_feature',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'condition',
            '#settings' => array(
              'from_state' => array(
                'ANY' => 'ANY',
              ),
              'to_state' => array(
                '5' => '5',
              ),
              '#argument map' => array(
                'old_state' => 'old_state',
                'new_state' => 'new_state',
              ),
            ),
            '#name' => 'workflow_check_transition',
            '#info' => array(
              'label' => 'Check workflow transition from (creation), draft, pending approval, granted approval, scheduled to go live',
              'label callback' => FALSE,
              'arguments' => array(
                'old_state' => array(
                  'type' => 'workflow_state',
                  'label' => 'Old workflow state',
                ),
                'new_state' => array(
                  'type' => 'workflow_state',
                  'label' => 'New workflow state',
                ),
              ),
              'module' => 'Workflow',
            ),
          ),
        ),
        '#actions' => array(
          '2' => array(
            '#weight' => -10,
            '#info' => array(
              'module' => 'Revisioning',
              'label' => 'Publish the most recent pending revision',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'content',
                ),
              ),
            ),
            '#name' => 'revisioning_rules_action_publish_latest',
            '#settings' => array(
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
          '1' => array(
            '#type' => 'action',
            '#settings' => array(
              'target_sid' => '6',
              'state_name' => 'live',
              'force' => 1,
              'workflow_comment' => '%title was automatically set to %state at the previously scheduled time.',
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_core_workflow_select_given_state_action',
            '#info' => array(
              'module' => 'Workflow',
              'arguments' => array(
                'node' => array(
                  'label' => 'Content',
                  'type' => 'node',
                ),
              ),
              'label' => 'Change workflow state of content to new state',
              'base' => 'rules_core_action_execute',
              'action_name' => 'workflow_select_given_state_action',
              'configurable' => TRUE,
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function thurgood_feature_imagecache_default_presets() {
  $items = array(
    'content_body' => array(
      'presetname' => 'content_body',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '640',
            'height' => '480',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'large_thumb' => array(
      'presetname' => 'large_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '180',
            'height' => '135',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'small_thumb' => array(
      'presetname' => 'small_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '64',
            'height' => '64',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;

/**
 * Implementation of hook_views_api().
 */
function thurgood_feature_views_api() {
  return array(
    'api' => '2',
  );
}
