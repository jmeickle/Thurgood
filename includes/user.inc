<?php

// General user-related settings.
variable_set('user_email_verification', FALSE);
variable_set('site_403', "toboggan/denied");

// LoginToboggan-specific settings.
variable_set('logintoboggan_confirm_email_at_registration', "1");
variable_set('logintoboggan_immediate_login_on_register', 1);
variable_set('logintoboggan_login_successful_message', "1");
variable_set('logintoboggan_login_with_email', "1");
variable_set('logintoboggan_minimum_password_length', "8");
variable_set('logintoboggan_override_destination_parameter', 1);
variable_set('logintoboggan_pre_auth_role', "10");
variable_set('logintoboggan_purge_unvalidated_user_interval', "604800");
variable_set('logintoboggan_redirect_on_confirm', "dashboard");
variable_set('logintoboggan_redirect_on_register', "dashboard");

?>
