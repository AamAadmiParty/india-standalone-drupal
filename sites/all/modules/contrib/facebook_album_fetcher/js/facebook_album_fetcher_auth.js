var socket = new easyXDM.Socket(
{
  container: "authorizeFrame",
  remote: "http://faf.kaushalkishore.com/",
  //Once it's ready, send a message to tell it what to name the login button & which plugin version we're using
  onReady: function()
  {
    var message = {
      btnName:jQuery('#login_msg').html(),
      pluginVersion:'1'
    };
    socket.postMessage(JSON.stringify(message));
  },
  //And wait for a response - which will come once the user has logged in with Facebook.
  //When the response comes, auto-submit the invisible form below to save the token.
  onMessage: function(message, origin)
  {
    var response = JSON.parse(message);
    jQuery('#facebookAccessToken').val(response.accessToken);
    jQuery('#facebookAccessTokenExpire').val(response.expiresIn);
  }
});
