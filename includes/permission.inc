<?php

 // This should be in Features, but it doesn't
 // seem to be working for me right now.

db_query("
INSERT INTO `role` (`rid`, `name`) VALUES
(3, 'administrator'),
(4, 'certified organization'),
(5, 'certified person'),
(6, 'local editor'),
(7, 'mailing list manager'),
(8, 'moderator'),
(9, 'news manager'),
(10, 'site editor')
");

?>
