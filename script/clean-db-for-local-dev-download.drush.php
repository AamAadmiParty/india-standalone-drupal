<?php

// This script is intended to be run from the command line as - drush scr /path/to/script
// The purpose of this script is to remove all non-important (eg cache) and sensitive data (eg users details) from the prod DB before it is downloaded for development.

// Trucate tables that need to truncated plain and simple
// Get the current schema, order it by table name.
/*
$schema = drupal_get_schema();
ksort($schema);
foreach ($schema as $table => $data) {
  if (substr($table, 0, 5) == 'cache' || $table == 'contact_importer_log' || $table == 'feeds_item' 
  || $table == 'feeds_log' || $table == 'feeds_source' || $table == 'flood' || $table == 'history'
  || $table == 'sessions' || $table == 'watchdog') {
    //print ("delete table = $table \n");
    //db_trucate("$table");
    db_query("truncate table $table");
  }
}
*/

/*

drop table authmap_bak;
drop table role_bak;
drop table sessions_bak;
drop table users_bak;

*/

// Pick all users not in the role 'Test Users' and delete them
$query = "select uid from {users} where uid not in (0,1,90,1815,2093,2129,2136,3743,19735,19933,157606) limit 0,2000";
$result = db_query($query);
$users_to_delete = array();
foreach ($result as $record) {
    array_push($users_to_delete, $record->uid);
}
user_delete_multiple($users_to_delete);

// Delete subscriptions info of all ANON users
// All AUTH users not in 'Test Users' role are alrady dead

?>
