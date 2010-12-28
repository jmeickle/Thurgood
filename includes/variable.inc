<?php
// Contact form settings.

variable_set('contact_form_information', "Run into a bug on our site? Spot inaccurate information? Just plain don't like something and want us to know? Leave a message for the site webmaster using the contact form below.");
variable_set('contact_default_status', 1);
variable_set('contact_hourly_threshold', 3);

$contact_info = array (
    array("cid" => 1, "category" => "Feedback", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 1),

);

foreach ($contact_info as $values) {
    db_query("INSERT INTO {contact} (cid, category, recipients, reply, weight, selected) VALUES ('%s', '%s', '%s', '%s', '%s', '%s')", $values);
}
?>
