MODULE
-------
Facebook Album Fetcher

DESCRIPTION/FEATURES
--------------------
This plugin allows you to fetch your facebook albums and photo galleries from 
your Facebook Account.To get started, you must first connect with your 
Facebook account. Once connected, you can create a gallery by making a new 
Drupal Post or Page and pasting in one line of special HTML, like this:

[facebookAlbumFetcher album_id=2032831634182]
Whenever you save a post or page containing these tokens, this module will 
automatically download the album information and insert its contents between 
them. You are free to include any normal content you like before or after, as 
usual.The example number above (2032831634182) is an ID that tells the module
which Facebook album you had like to import. To find a list of available 
albums, you can use the "Facebook Album List" tab.


REQUIREMENTS
------------
Drupal 7.0


INSTALL/CONFIG
--------------
Step 1 : Download and unpack the facebook_album_fetcher module in 
	"sites/all/modules".
Step 2 : Go to "Administer" -> "Modules" and enable the module.
Step 3 : Connect your facebook account to with Facebook Album Fetcher. 
Step 4 : After getting the proper Access Token Save it.
Step 5 : Now check other tabs that it is working proper.
Step 6 : Enable the "Facebook Album Fetcher" Filter:
	Step 6.1 : Open the "Text Formats" from "admin/config"
	Step 6.2 : Click on the "Configure" Operation of Full HTML
	Step 6.3 : Select the "Facebook Album Fetcher" option of Enabled 
		   filters Section.
	Step 6.4 : Position "Facebook Album Fetcher" on the Top by setting 
		   the order inside the "Filter processing order".
	Step 6.5 : Now Save the Configurtaion.
Step 7 : To fetch the album from your account .
Step 8 : Now Copy the "FACEBOOK ALBUM FETCHER CODE" in your post or page.
Step 9 : Before saving Select the Text Format Full HTML.
Step 10 : Save your page.

Facebook Album Fetcher Administration
-----------------------------------------
Facebook Login : Provide you an interface to connect your facebook account 
		 and register with Facebook Album Fetcher App. 
Facebook Album List : It will import all of your facebook album. 
Personal Details : Your facebook personal details will be shown here. 
Facebook Friends : It imports all of your facebook friends list and you can 
		   access there public albums and can integrate with your drupal content. 
Setting : This form provides you the various setting of the facebook 
	  album fetcher. 

Lightbox Image Popup Integration:
----------------------------------
Install the Lightbox Module to open the image into lightbox. To enable the 
lightbox module for Facebook Photo Fetcher. Go on the Settings tab and enable
the lightbox "Embed Lightbox For Opening Image" option.
