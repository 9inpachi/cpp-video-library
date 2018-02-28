/*
MY VIDEO LIBRARY
C++ Project by Fawad Ali (9inpachi)
Made Opensource by me :)
Enjoy
*/
entertainment:
//Entertainment Options
welcomeText("*|*|*|*|*|*|*|*|*   Entertainment   *|*|*|*|*|*|*|*|*");
cout<<"1: Music\n"
<<"2: Movies\n"
<<"3: Cartoons\n"
<<"4: Other...\n"
<<"0: Go to home\n\n"
<<"Select an option to proceed: ";

cin>>chooseOption;

switch(chooseOption){
	
	case 0:
		goto home;
		break;
		
	//Music videos
	case 1:
		{
			musicD:
			video music;
			
			//Function to show list and other options of selected object
			chooseOption = videoOptionsScreen(music, "*|*|*|*|*|*|*|*|*   Music   *|*|*|*|*|*|*|*|*", "includes\\data\\music-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto entertainment;
			}else{
				goto musicD;
			}
			
		}
		break;
	
	//Movies Videos
	case 2:
		{
			moviesD:
			video movies;
			chooseOption = videoOptionsScreen(movies, "*|*|*|*|*|*|*|*|*   Movies   *|*|*|*|*|*|*|*|*", "includes\\data\\movies-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto entertainment;
			}else{
				goto moviesD;
			}
		}
		break;
		
	
	//Cartoons Videos
	case 3:
		{
			cartoonsD:
			video cartoons;
			chooseOption = videoOptionsScreen(cartoons, "*|*|*|*|*|*|*|*|*   Cartoons   *|*|*|*|*|*|*|*|*", "includes\\data\\cartoons-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto entertainment;
			}else{
				goto cartoonsD;
			}
		}
		break;
	
	//Other Entertainment Videos
	case 4:
		{
			otherEntertainmentD:
			video otherEntertainment;
			chooseOption = videoOptionsScreen(otherEntertainment, "*|*|*|*|*|*|*|*|*   Other Videos | Entertainment   *|*|*|*|*|*|*|*|*", "includes\\data\\other-entertainment-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto entertainment;
			}else{
				goto otherEntertainmentD;
			}
		}
		break;
		
	default:
		goto entertainment;
		break;
}

break;
