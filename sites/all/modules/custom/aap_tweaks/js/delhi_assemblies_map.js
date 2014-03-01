(function ($) {

Drupal.behaviors.aap_getData = function (id) {
	var delhi_const_data = [
	                    	{
	                    		"id": "1",
	                    		"name": "Narela",
	                    		"fb": "http://www.facebook.com/AAPDLNarela",
	                    		"phone": "8588833401",
	                    		"email": "aapdelhi01@gmail.com"
	                    	},
	                    	{
	                    		"id": "2",
	                    		"name": "Burari",
	                    		"fb": "http://www.facebook.com/AAPDLBurari",
	                    		"phone": "8588833402",
	                    		"email": "aapdelhi02@gmail.com"
	                    	},
	                    	{
	                    		"id": "3",
	                    		"name": "Timarpur",
	                    		"fb": "http://www.facebook.com/AAPDLTimarpur",
	                    		"phone": "8588833403",
	                    		"email": "aapdelhi03@gmail.com"
	                    	},
	                    	{
	                    		"id": "4",
	                    		"name": "Adarsh Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLAdarshNagar",
	                    		"phone": "8588833404",
	                    		"email": "aapdelhi04@gmail.com"
	                    	},
	                    	{
	                    		"id": "5",
	                    		"name": "Badli",
	                    		"fb": "http://www.facebook.com/AAPDLBadli",
	                    		"phone": "8588833405",
	                    		"email": "aapdelhi05@gmail.com"
	                    	},
	                    	{
	                    		"id": "6",
	                    		"name": "Rithala",
	                    		"fb": "http://www.facebook.com/AAPDLRithala",
	                    		"phone": "8588833406",
	                    		"email": "aapdelhi06@gmail.com"
	                    	},
	                    	{
	                    		"id": "7",
	                    		"name": "Bawana",
	                    		"fb": "http://www.facebook.com/AAPDLBawana",
	                    		"phone": "8588833407",
	                    		"email": "aapdelhi07@gmail.com"
	                    	},
	                    	{
	                    		"id": "8",
	                    		"name": "Mundka",
	                    		"fb": "http://www.facebook.com/AAPDLMundka",
	                    		"phone": "8588833408",
	                    		"email": "aapdelhi08@gmail.com"
	                    	},
	                    	{
	                    		"id": "9",
	                    		"name": "Kirari",
	                    		"fb": "http://www.facebook.com/AAPDLKirari",
	                    		"phone": "8588833409",
	                    		"email": "aapdelhi09@gmail.com"
	                    	},
	                    	{
	                    		"id": "10",
	                    		"name": "Sultanpur Majra",
	                    		"fb": "http://www.facebook.com/AAPDLSultanpuri",
	                    		"phone": "8588833410",
	                    		"email": "aapdelhi10@gmail.com"
	                    	},
	                    	{
	                    		"id": "11",
	                    		"name": "Nangloi Jat",
	                    		"fb": "http://www.facebook.com/AAPDLNangloiJat",
	                    		"phone": "8588833411",
	                    		"email": "aapdelhi11@gmail.com"
	                    	},
	                    	{
	                    		"id": "12",
	                    		"name": "Mangol Puri",
	                    		"fb": "http://www.facebook.com/AAPDLMangolpuri",
	                    		"phone": "8588833412",
	                    		"email": "aapdelhi12@gmail.com"
	                    	},
	                    	{
	                    		"id": "13",
	                    		"name": "Rohini",
	                    		"fb": "http://www.facebook.com/AAPDLRohini",
	                    		"phone": "9999999999",
	                    		"email": "aapdelhi13@gmail.com"
	                    	},
	                    	{
	                    		"id": "14",
	                    		"name": "Shalimar Bagh",
	                    		"fb": "http://www.facebook.com/AAPDLShalimarBagh",
	                    		"phone": "8588833414",
	                    		"email": "aapdelhi14@gmail.com"
	                    	},
	                    	{
	                    		"id": "15",
	                    		"name": "Shakur Basti",
	                    		"fb": "http://www.facebook.com/AAPDLShakurbasti",
	                    		"phone": "8588833415",
	                    		"email": "aapdelhi15@gmail.com"
	                    	},
	                    	{
	                    		"id": "16",
	                    		"name": "Tri Nagar",
	                    		"fb": "https://www.facebook.com/AAPDLTriNagar",
	                    		"phone": "8588833416",
	                    		"email": "aapdelhi16@gmail.com"
	                    	},
	                    	{
	                    		"id": "17",
	                    		"name": "Wazirpur",
	                    		"fb": "http://www.facebook.com/AAPDLWazirpur",
	                    		"phone": "8588833417",
	                    		"email": "aapdelhi17@gmail.com"
	                    	},
	                    	{
	                    		"id": "18",
	                    		"name": "Model Town",
	                    		"fb": "http://www.facebook.com/AAPDLModelTown",
	                    		"phone": "8588833418",
	                    		"email": "aapdelhi18@gmail.com"
	                    	},
	                    	{
	                    		"id": "19",
	                    		"name": "Sadar Bazar",
	                    		"fb": "http://www.facebook.com/AAPDLSadarBazar",
	                    		"phone": "8588833419",
	                    		"email": "aapdelhi19@gmail.com"
	                    	},
	                    	{
	                    		"id": "20",
	                    		"name": "Chandni Chowk",
	                    		"fb": "http://www.facebook.com/AAPDLChandniChowk",
	                    		"phone": "8588833420",
	                    		"email": "aapdelhi20@gmail.com"
	                    	},
	                    	{
	                    		"id": "21",
	                    		"name": "Matia Mahal",
	                    		"fb": "http://www.facebook.com/AAPDLMatiaMahal",
	                    		"phone": "8588833421",
	                    		"email": "aapdelhi21@gmail.com"
	                    	},
	                    	{
	                    		"id": "22",
	                    		"name": "Ballimaran",
	                    		"fb": "http://www.facebook.com/AAPDLBalliMaran",
	                    		"phone": "8588833422",
	                    		"email": "aapdelhi22@gmail.com"
	                    	},
	                    	{
	                    		"id": "23",
	                    		"name": "Karol Bagh",
	                    		"fb": "http://www.facebook.com/AAPDLKarolBagh",
	                    		"phone": "8588833423",
	                    		"email": "aapdelhi23@gmail.com"
	                    	},
	                    	{
	                    		"id": "24",
	                    		"name": "Patel Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLPatelNagar",
	                    		"phone": "8588833424",
	                    		"email": "aapdelhi24@gmail.com"
	                    	},
	                    	{
	                    		"id": "25",
	                    		"name": "Moti Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLMotiNagar",
	                    		"phone": "8588833425",
	                    		"email": "aapdelhi25@gmail.com"
	                    	},
	                    	{
	                    		"id": "26",
	                    		"name": "Madipur",
	                    		"fb": "http://www.facebook.com/AAPDLMadipur",
	                    		"phone": "8588833426",
	                    		"email": "aapdelhi26@gmail.com"
	                    	},
	                    	{
	                    		"id": "27",
	                    		"name": "Rajouri Garden",
	                    		"fb": "http://www.facebook.com/AAPDLRajouriGarden",
	                    		"phone": "8588833427",
	                    		"email": "aapdelhi27@gmail.com"
	                    	},
	                    	{
	                    		"id": "28",
	                    		"name": "Hari Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLHariNagar",
	                    		"phone": "8588833428",
	                    		"email": "aapdelhi28@gmail.com"
	                    	},
	                    	{
	                    		"id": "29",
	                    		"name": "Tilak Nagar",
	                    		"fb": "https://www.facebook.com/AAPDLTilakNagar",
	                    		"phone": "8588833429",
	                    		"email": "aapdelhi29@gmail.com"
	                    	},
	                    	{
	                    		"id": "30",
	                    		"name": "Janakpuri",
	                    		"fb": "http://www.facebook.com/AAPDLJanakpuri",
	                    		"phone": "8588833430",
	                    		"email": "aapdelhi30@gmail.com"
	                    	},
	                    	{
	                    		"id": "31",
	                    		"name": "Vikaspuri",
	                    		"fb": "http://www.facebook.com/AAPDLVikaspuri",
	                    		"phone": "8588833431",
	                    		"email": "aapdelhi31@gmail.com"
	                    	},
	                    	{
	                    		"id": "32",
	                    		"name": "Uttam Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLUttamNagar",
	                    		"phone": "8588833432",
	                    		"email": "aapdelhi32@gmail.com"
	                    	},
	                    	{
	                    		"id": "33",
	                    		"name": "Dwarka",
	                    		"fb": "http://www.facebook.com/AAPDLDwarka",
	                    		"phone": "8588833433",
	                    		"email": "aapdelhi33@gmail.com"
	                    	},
	                    	{
	                    		"id": "34",
	                    		"name": "Matiala",
	                    		"fb": "http://www.facebook.com/AAPDLMatiyala",
	                    		"phone": "8588833434",
	                    		"email": "aapdelhi34@gmail.com"
	                    	},
	                    	{
	                    		"id": "35",
	                    		"name": "Najafgarh",
	                    		"fb": "http://www.facebook.com/AAPDLNajafgarh",
	                    		"phone": "8588833435",
	                    		"email": "aapdelhi35@gmail.com"
	                    	},
	                    	{
	                    		"id": "36",
	                    		"name": "Bijwasan",
	                    		"fb": "http://www.facebook.com/AAPDLBijwasan",
	                    		"phone": "8588833436",
	                    		"email": "aapdelhi36@gmail.com"
	                    	},
	                    	{
	                    		"id": "37",
	                    		"name": "Palam",
	                    		"fb": "http://www.facebook.com/AAPDLPalam",
	                    		"phone": "8588833437",
	                    		"email": "aapdelhi37@gmail.com"
	                    	},
	                    	{
	                    		"id": "38",
	                    		"name": "Delhi Cantt",
	                    		"fb": "http://www.facebook.com/AAPDLDelhiCantt",
	                    		"phone": "8588833438",
	                    		"email": "aapdelhi38@gmail.com"
	                    	},
	                    	{
	                    		"id": "39",
	                    		"name": "Rajinder Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLRajinderNagar",
	                    		"phone": "8588833439",
	                    		"email": "aapdelhi39@gmail.com"
	                    	},
	                    	{
	                    		"id": "40",
	                    		"name": "New Delhi",
	                    		"fb": "http://www.facebook.com/AAPDLNewDelhi",
	                    		"phone": "8588833440",
	                    		"email": "aapdelhi40@gmail.com"
	                    	},
	                    	{
	                    		"id": "41",
	                    		"name": "Jangpura",
	                    		"fb": "http://www.facebook.com/AAPDLJangpura",
	                    		"phone": "8588833441",
	                    		"email": "aapdelhi41@gmail.com"
	                    	},
	                    	{
	                    		"id": "42",
	                    		"name": "Kasturba Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLKasturbaNagar",
	                    		"phone": "8588833442",
	                    		"email": "aapdelhi42@gmail.com"
	                    	},
	                    	{
	                    		"id": "43",
	                    		"name": "Malviya Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLMalviyaNagar",
	                    		"phone": "8588833443",
	                    		"email": "aapdelhi43@gmail.com"
	                    	},
	                    	{
	                    		"id": "44",
	                    		"name": "Rk Puram",
	                    		"fb": "http://www.facebook.com/AAPDLRKPuram",
	                    		"phone": "8588833444",
	                    		"email": "aapdelhi44@gmail.com"
	                    	},
	                    	{
	                    		"id": "45",
	                    		"name": "Mehrauli",
	                    		"fb": "http://www.facebook.com/AAPDLMehrauli",
	                    		"phone": "8588833445",
	                    		"email": "aapdelhi45@gmail.com"
	                    	},
	                    	{
	                    		"id": "46",
	                    		"name": "Chhatarpur",
	                    		"fb": "http://www.facebook.com/AAPDLChhatarpur",
	                    		"phone": "8588833446",
	                    		"email": "aapdelhi46@gmail.com"
	                    	},
	                    	{
	                    		"id": "47",
	                    		"name": "Deoli",
	                    		"fb": "http://www.facebook.com/AAPDLDeoli",
	                    		"phone": "8588833447",
	                    		"email": "aapdelhi47@gmail.com"
	                    	},
	                    	{
	                    		"id": "48",
	                    		"name": "Ambedkar Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLAmbedkarNagar",
	                    		"phone": "8588833448",
	                    		"email": "aapdelhi48@gmail.com"
	                    	},
	                    	{
	                    		"id": "49",
	                    		"name": "Sangam Vihar",
	                    		"fb": "http://www.facebook.com/AAPDLSangamVihar",
	                    		"phone": "8588833449",
	                    		"email": "aapdelhi49@gmail.com"
	                    	},
	                    	{
	                    		"id": "50",
	                    		"name": "Greater Kailash",
	                    		"fb": "http://www.facebook.com/AAPDLGreaterKailash",
	                    		"phone": "8588833450",
	                    		"email": "aapdelhi50@gmail.com"
	                    	},
	                    	{
	                    		"id": "51",
	                    		"name": "Kalkaji",
	                    		"fb": "http://www.facebook.com/AAPDLKalkaji",
	                    		"phone": "8588833451",
	                    		"email": "aapdelhi51@gmail.com"
	                    	},
	                    	{
	                    		"id": "52",
	                    		"name": "Tughlakabad",
	                    		"fb": "http://www.facebook.com/AAPDLTughlakabad",
	                    		"phone": "8588833452",
	                    		"email": "aapdelhi52@gmail.com"
	                    	},
	                    	{
	                    		"id": "53",
	                    		"name": "Badarpur",
	                    		"fb": "http://www.facebook.com/AAPDLBadarpur",
	                    		"phone": "8588833453",
	                    		"email": "aapdelhi53@gmail.com"
	                    	},
	                    	{
	                    		"id": "54",
	                    		"name": "Okhla",
	                    		"fb": "http://www.facebook.com/AAPDLOkhla",
	                    		"phone": "8588833454",
	                    		"email": "aapdelhi54@gmail.com"
	                    	},
	                    	{
	                    		"id": "55",
	                    		"name": "Trilokpuri",
	                    		"fb": "http://www.facebook.com/AAPDLTrilokPuri",
	                    		"phone": "8588833455",
	                    		"email": "aapdelhi55@gmail.com"
	                    	},
	                    	{
	                    		"id": "56",
	                    		"name": "Kondli",
	                    		"fb": "http://www.facebook.com/AAPDLKondli",
	                    		"phone": "8588833456",
	                    		"email": "aapdelhi56@gmail.com"
	                    	},
	                    	{
	                    		"id": "57",
	                    		"name": "Patparganj",
	                    		"fb": "http://www.facebook.com/AAPDLPatparGanj",
	                    		"phone": "8588833457",
	                    		"email": "aapdelhi57@gmail.com"
	                    	},
	                    	{
	                    		"id": "58",
	                    		"name": "Laxmi Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLLaxmiNagar",
	                    		"phone": "8588833458",
	                    		"email": "aapdelhi58@gmail.com"
	                    	},
	                    	{
	                    		"id": "59",
	                    		"name": "Vishwas Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLVishwashNagar",
	                    		"phone": "8588833459",
	                    		"email": "aapdelhi59@gmail.com"
	                    	},
	                    	{
	                    		"id": "60",
	                    		"name": "Krishna Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLKrishnaNagar",
	                    		"phone": "8588833460",
	                    		"email": "aapdelhi60@gmail.com"
	                    	},
	                    	{
	                    		"id": "61",
	                    		"name": "Gandhi Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLGandhiNagar",
	                    		"phone": "8588833461",
	                    		"email": "aapdelhi61@gmail.com"
	                    	},
	                    	{
	                    		"id": "62",
	                    		"name": "Shahdara",
	                    		"fb": "http://www.facebook.com/AAPDLShahdara",
	                    		"phone": "8588833462",
	                    		"email": "aapdelhi62@gmail.com"
	                    	},
	                    	{
	                    		"id": "63",
	                    		"name": "Seemapuri",
	                    		"fb": "http://www.facebook.com/AAPDLSeemapuri",
	                    		"phone": "8588833463",
	                    		"email": "aapdelhi63@gmail.com"
	                    	},
	                    	{
	                    		"id": "64",
	                    		"name": "Rohtas Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLRohtasNagar",
	                    		"phone": "8588833464",
	                    		"email": "aapdelhi64@gmail.com"
	                    	},
	                    	{
	                    		"id": "65",
	                    		"name": "Seelampur",
	                    		"fb": "http://www.facebook.com/AAPDLSeelampur",
	                    		"phone": "8588833465",
	                    		"email": "aapdelhi65@gmail.com"
	                    	},
	                    	{
	                    		"id": "66",
	                    		"name": "Ghonda",
	                    		"fb": "http://www.facebook.com/AAPDLGhonda",
	                    		"phone": "8588833466",
	                    		"email": "aapdelhi66@gmail.com"
	                    	},
	                    	{
	                    		"id": "67",
	                    		"name": "Babarpur",
	                    		"fb": "http://www.facebook.com/AAPDLBabarpur",
	                    		"phone": "8588833467",
	                    		"email": "aapdelhi67@gmail.com"
	                    	},
	                    	{
	                    		"id": "68",
	                    		"name": "Gokalpur",
	                    		"fb": "http://www.facebook.com/AAPDLGokulpuri",
	                    		"phone": "8588833468",
	                    		"email": "aapdelhi68@gmail.com"
	                    	},
	                    	{
	                    		"id": "69",
	                    		"name": "Mustafabad",
	                    		"fb": "http://www.facebook.com/AAPDLMustafabad",
	                    		"phone": "8588833469",
	                    		"email": "aapdelhi69@gmail.com"
	                    	},
	                    	{
	                    		"id": "70",
	                    		"name": "Karawal Nagar",
	                    		"fb": "http://www.facebook.com/AAPDLkarawalNagar",
	                    		"phone": "8588833470",
	                    		"email": "aapdelhi70@gmail.com"
	                    	}
	                    ];
	var data = delhi_const_data[id-1];
	
	$("#dialog").html(
	'<br/><strong>Facebook Page: </strong> <a target="_blank" href="'+data.fb+'">'+data.fb+'</a>'+
	'<br/><br/><strong>Email: </strong> '+data.email+
	'<br/><br/><strong>Phone Number: </strong> '+data.phone
	);
	$("#dialog").dialog( {
		width : 600,
		height : 220,
		modal : true,
		title : data.name + ', Delhi, Aam Aadmi Party - Contact Details',
	});
	
//	url = window.location.protocol + "//" + window.location.host + Drupal.settings.basePath + 'assembly-info.php';
//	$.ajax( {
//		type : "POST",
//		url : url,
//		data : {
//			id : id
//		},
//		dataType : "json",
//		success : function(data) {
//			$("#dialog").html(data);
//			$("#dialog").dialog( {
//				width : 800,
//				height : 250,
//				modal : true
//			});
//		}
//	});
	};
	
})(jQuery);
