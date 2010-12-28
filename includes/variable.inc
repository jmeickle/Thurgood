<?php

// Set default input format to Full HTML
variable_set('filter_default_format', '2');

// Enable vertical tabs on node type settings page
variable_set('vertical_tabs_default', 1);
variable_set('vertical_tabs_minimum', '1');
variable_set('vertical_tabs_node_type_settings', 1);

// Pathauto settings
// Default:
variable_set('pathauto_node_pattern', '[title-raw]');

// Contact form settings.

variable_set('contact_form_information', "Run into a bug on our site? Spot inaccurate information? Just plain don't like something and want us to know? Leave a message for the site webmaster using the contact form below.");
variable_set('contact_default_status', 1);
variable_set('contact_hourly_threshold', 3);

$contact_info = array (
    array("cid" => 1, "category" => "Feedback about site", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 1),
    array("cid" => 2, "category" => "Help with using the site", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 0),
    array("cid" => 3, "category" => "Wrong information on site", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 0),
    array("cid" => 4, "category" => "Request for further information", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 0),
);

foreach ($contact_info as $values) {
    db_query("INSERT INTO {contact} (cid, category, recipients, reply, weight, selected) VALUES ('%s', '%s', '%s', '%s', '%s', '%s')", $values);
}
?>
