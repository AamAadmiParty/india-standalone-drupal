<?php

/**
 * @file
 * Facebook Album Fetcher Module
 */

define('FAF_ACCESS_TOKEN', variable_get('faf_access_token'));
define('FAF_ACCESS_TOKEN_EXPIRY', variable_get('faf_expiry_time'));
define('FAF_ACCESS_TOKEN_START', variable_get('faf_start_time'));
/**
 * Function for getting the expiry time of the User Access Token.
 */
function facebook_album_fetcher_get_expiry() {
  $suffix = " Minutes";
  $time_diff = time() - FAF_ACCESS_TOKEN_START;
  $rem_time = FAF_ACCESS_TOKEN_EXPIRY - $time_diff;
  $time_remaining = (int) ($rem_time / 60);
  if ($time_remaining > 60) {
    $time_remaining = $time_remaining / 60;
    $suffix = " Hours";
    if ($time_remaining > 24) {
      $time_remaining = $time_remaining / 24;
      $suffix = " Days";
    }
  }
  $time_rem['time'] = (int) ($time_remaining);
  $time_rem['suffix'] = $suffix;
  return $time_rem;
}
/**
* Getting the JSON data of the Album.
*/
function facebook_album_fetcher_get_facebook_album_json_data($user_id = "") {
  if ($user_id) {
    $users_id = $user_id;
  }
  else {
    $user_info = facebook_album_fetcher_get_user_info();
    if (!is_object($user_info)) {
      return $user_info;
    }
  $users_id = $user_info->id;
  }
  $json_data = facebook_album_fetcher_get_graph_api_json_data('https://graph.facebook.com/' . $users_id . '/albums?limit=1000&access_token=' . FAF_ACCESS_TOKEN . '&fields=id,cover_photo,count,link,name,from,created_time,description');
  $fb_album_data = facebook_album_fetcher_get_next_album($json_data);
  return $fb_album_data;
}
/**
* Getting the Next Page Data.
*/
function facebook_album_fetcher_get_next_album($json_data = ""){
  if(property_exists('json_data','paging')){
    $next_json_data = $json_data->paging->next;
  }  
  else{
    $next_json_data = "";
  }
  if(empty($next_json_data)){
    return $json_data->data;
  }
  while($next_json_data){
    $pagination_data = facebook_album_fetcher_get_graph_api_json_data($json_data->paging->next);
    $json_data = array_merge($json_data->data,$pagination_data->data);
    if(isset($pagination_data->paging->next)){
      $next_json_data = $pagination_data->paging->next;
    }
    else{
      $next_json_data = "";
    }
  }
  return $json_data;
}
/**
 * Function for getting the User Personal Information.
 */
function facebook_album_fetcher_get_user_info($user_id = "") {
  if ($user_id) {
    $users_id = $user_id;
  }
  else {
    $users_id = 'me';
  }
  $user = facebook_album_fetcher_get_graph_api_json_data("https://graph.facebook.com/" . $users_id . "?access_token=" . FAF_ACCESS_TOKEN . "&fields=name,id,email,link,username,gender,picture");
  if (isset($user->error)) {
    return ($user->error->code);
  }
  return $user;
}
/**
 * Function for Submiting and the getting the Graph API Data.
 */
function facebook_album_fetcher_get_graph_api_json_data($url) {
  $ch = curl_init();
  curl_setopt($ch, CURLOPT_URL, $url);
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, TRUE);
  $res = curl_exec($ch);
  $fb_user_info = json_decode($res);
  return $fb_user_info;
}
/**
 * Function for getting the friend list of the user.
 */
function facebook_album_fetcher_get_friend_list() {
  $user_info = facebook_album_fetcher_get_user_info();
  $json_data = facebook_album_fetcher_get_graph_api_json_data('https://graph.facebook.com/' . $user_info->id . '/friends?access_token=' . FAF_ACCESS_TOKEN);
  if (isset($json_data->error)) {
    return ($json_data->error->code);
  }
  $fb_friends_data = $json_data->data;
  return $fb_friends_data;
}
/**
 * Function for getting the photos from Album.
 */
function facebook_album_fetcher_get_fb_photos($album_id) {
  $json_data = facebook_album_fetcher_get_graph_api_json_data('https://graph.facebook.com/' . $album_id . '/photos?access_token=' . FAF_ACCESS_TOKEN . '&limit=999&fields=name,source,picture');
  if (isset($json_data->error)) {
    return ($json_data->error->message);
  }
  $fb_album_data = $json_data->data;
  return $fb_album_data;
}
/**
 * Function for getting the Image Gallary HTML.
 */
function facebook_album_fetcher_get_fb_photos_html($album_id) {
  $photos_array = facebook_album_fetcher_get_fb_photos($album_id);
  $faf_photos_html = "";
  $light_box_class = "target='_blank'";
  $default_class = "faf_imagebox";
  $faf_image_columns = variable_get("faf_image_columns");
  $faf_image_class = variable_get("faf_image_class");
  $faf_image_lightbox = variable_get("faf_image_lightbox");
  if ($faf_image_lightbox) {
    $light_box_class = "rel='lightbox[" . $album_id . "]'";
  }
  if ($faf_image_class) {
    $default_class = $faf_image_class;
  }
  $image_counter = 1;
  foreach ($photos_array as $key) {
    $faf_photos_html .= "<a href='" . $key->source . "' $light_box_class><img src = '" . $key->picture . "' class='" . $default_class . "'></a>&nbsp;&nbsp;&nbsp;&nbsp;";
    if ($faf_image_columns && $image_counter) {
      if ($image_counter % $faf_image_columns == 0) {
        $faf_photos_html = "<div>" . $faf_photos_html . "</div>";
      }
    }
    $image_counter++;
  }	
  return $faf_photos_html;
}
/**
 * Function for getting the Error Messages.
 */
function facebook_album_fetcher_get_error_msg() {
  global $base_url;
  $error_msg = "";
  $expiry_time = facebook_album_fetcher_get_expiry();
  $configuration_url = $base_url . "/admin/config/content/facebook_album_fetcher/configuration";
  if (FAF_ACCESS_TOKEN == "") {
    $error_msg = "Please login to your facebook account and generate a valid access toekb to fetch the album list. For login <a href='" . $configuration_url . "'>Click here</a>.";
  }
  elseif ($expiry_time['time'] <= 0) {
    $error_msg = "Your access token has been expired. Please renew your access token.For renew the access token <a href='" . $configuration_url . "'>Click here</a>.";
  }
  return $error_msg;
}
/**
 * Extending the User Access Token From 1 Hour to 2 Months.
 */
function facebook_album_fetcher_extend_token($access_token = "") {
  $faf_app_url = variable_get('faf_app_url');
  $ch = curl_init($faf_app_url . "faf_extend_token.php");
  curl_setopt($ch, CURLOPT_POST, TRUE);
  curl_setopt($ch, CURLOPT_POSTFIELDS, "access_token=" . $access_token);
  curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
  curl_setopt($ch, CURLOPT_VERBOSE, 1);
  curl_setopt($ch, CURLOPT_NOBODY, 0);
  $response = curl_exec($ch);
  $access_data = explode("&", $response);
  $access_token = explode("=", $access_data[0]);
  $expiry = explode("=", $access_data[1]);
  $token = array("access_token" => $access_token[1], "access_expiry" => $expiry[1]);
  return $token;
}
/**
 * Function facebook_album_fetcher_get_module_status().
 */
function facebook_album_fetcher_get_module_status($module_name = "") {
  $query = db_query("SELECT status FROM {system} sys WHERE sys.name = :module_name", array(":module_name" => $module_name));
  $result = $query->fetchAssoc();
  return $result['status'];
}
/**
 * Format the Error Message.
 */
function facebook_album_fetcher_show_error($error_code="") {
  switch ($error_code) {
    case 190:
      $error_msg = t('Error 190: Invalid OAuth Access Token.  Try using the Facebook Login to re-validate your module with App. <a href="@faf_link">Click Here</a>', array('@faf_link' => url('admin/config/content/facebook_album_fetcher/configuration/re_generate')));
      break;

    case 803:
      $error_msg = t("Error 803: Your album id doesn't appear to exist.");
      break;

    case 100:
      $error_msg = t("Error 100: Your album id doesn't appear to be accessible.");
      break;

    default:
      $error_msg = t("An unknown error occurred while trying to fetch the album (empty reply)");
  }
  return $error_msg;
}
