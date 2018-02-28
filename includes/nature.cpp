/*
MY VIDEO LIBRARY
C++ Project by Fawad Ali (9inpachi)
Made Opensource by me :)
Enjoy
*/
nature:
//Nature Options
welcomeText("*|*|*|*|*|*|*|*|*   Nature   *|*|*|*|*|*|*|*|*");
cout<<"1: Mountains\n"
<<"2: Hills\n"
<<"3: Sunset\n"
<<"4: Other...\n"
<<"0: Go to home\n\n"
<<"Select an option to proceed: ";

cin>>chooseOption;

switch(chooseOption){
	
	case 0:
		goto home;
		break;
		
	//Mountains videos
	case 1:
		{
			mountainsD:
			video mountains;
			
			//Function to show list and other options of selected object
			chooseOption = videoOptionsScreen(mountains, "*|*|*|*|*|*|*|*|*   Mountains   *|*|*|*|*|*|*|*|*", "includes\\data\\mountains-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto nature;
			}else{
				goto mountainsD;
			}
			
		}
		break;
	
	//Hills Videos
	case 2:
		{
			hillsD:
			video hills;
			chooseOption = videoOptionsScreen(hills, "*|*|*|*|*|*|*|*|*   Hills   *|*|*|*|*|*|*|*|*", "includes\\data\\hills-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto nature;
			}else{
				goto hillsD;
			}
		}
		break;
		
	
	//Sunset Videos
	case 3:
		{
			sunsetD:
			video sunset;
			chooseOption = videoOptionsScreen(sunset, "*|*|*|*|*|*|*|*|*   Sunset   *|*|*|*|*|*|*|*|*", "includes\\data\\sunset-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto nature;
			}else{
				goto sunsetD;
			}
		}
		break;
	
	//Other Nature Videos
	case 4:
		{
			othernatureD:
			video othernature;
			chooseOption = videoOptionsScreen(othernature, "*|*|*|*|*|*|*|*|*   Other Videos | Nature   *|*|*|*|*|*|*|*|*", "includes\\data\\other-nature-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto nature;
			}else{
				goto othernatureD;
			}
		}
		break;
		
	default:
		goto nature;
		break;
}

break;
