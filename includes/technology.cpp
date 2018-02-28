/*
MY VIDEO LIBRARY
C++ Project by Fawad Ali (9inpachi)
Made Opensource by me :)
Enjoy
*/
technology:
//Technology Options
welcomeText("*|*|*|*|*|*|*|*|*   Technology   *|*|*|*|*|*|*|*|*");
cout<<"1: Smart Phones\n"
<<"2: Computers\n"
<<"3: Mechanical\n"
<<"4: Other...\n"
<<"0: Go to home\n\n"
<<"Select an option to proceed: ";

cin>>chooseOption;

switch(chooseOption){
	
	case 0:
		goto home;
		break;
		
	//Smart Phones videos
	case 1:
		{
			smartPhonesD:
			video smartPhones;
			
			//Function to show list and other options of selected object
			chooseOption = videoOptionsScreen(smartPhones, "*|*|*|*|*|*|*|*|*   Smart Phones   *|*|*|*|*|*|*|*|*", "includes\\data\\smartphones-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto technology;
			}else{
				goto smartPhonesD;
			}
			
		}
		break;
	
	//Computers Videos
	case 2:
		{
			computersD:
			video computers;
			chooseOption = videoOptionsScreen(computers, "*|*|*|*|*|*|*|*|*   Computers   *|*|*|*|*|*|*|*|*", "includes\\data\\computers-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto technology;
			}else{
				goto computersD;
			}
		}
		break;
		
	
	//Mechanical Videos
	case 3:
		{
			mechanicalD:
			video mechanical;
			chooseOption = videoOptionsScreen(mechanical, "*|*|*|*|*|*|*|*|*   Mechanical   *|*|*|*|*|*|*|*|*", "includes\\data\\mechanical-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto technology;
			}else{
				goto mechanicalD;
			}
		}
		break;
	
	//Other Technology Videos
	case 4:
		{
			otherTechnologyD:
			video otherTechnology;
			chooseOption = videoOptionsScreen(otherTechnology, "*|*|*|*|*|*|*|*|*   Other Videos | Technology   *|*|*|*|*|*|*|*|*", "includes\\data\\other-technology-videos.vidList", chooseOption);
			if(chooseOption == 0){
				goto technology;
			}else{
				goto otherTechnologyD;
			}
		}
		break;
		
	default:
		goto technology;
		break;
}

break;
