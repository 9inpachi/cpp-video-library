/*
MY VIDEO LIBRARY
C++ Project by Fawad Ali (9inpachi)
Made Opensource by me :)
Enjoy
*/
learning:
	//Learning Options
	welcomeText("*|*|*|*|*|*|*|*|*   Learning   *|*|*|*|*|*|*|*|*");
	cout<<"1: Subject Lectures\n"
	<<"2: Programming Tutorials\n"
	<<"3: Motivational Videos\n"
	<<"4: Other...\n"
	<<"0: Go to home\n\n"
	<<"Select an option to proceed: ";
	
	cin>>chooseOption;
	
	switch(chooseOption){
		
		case 0:
			goto home;
			break;
			
		//Subject Lectures Options
		case 1:
			lectures:
			welcomeText("*|*|*|*|*|*|*|*|*   Subject Lectures   *|*|*|*|*|*|*|*|*");
			cout<<"1: Maths\n"
			<<"2: English\n"
			<<"3: Urdu\n"
			<<"4: Social Studies\n"
			<<"5: Science\n"
			<<"6: Other...\n"
			<<"0: Go back\n\n"
			<<"Select an option to proceed: ";
			
			cin>>chooseOption;
			
			switch(chooseOption){
				case 0:
					goto learning;
					break;
					
				//Maths videos
				case 1:
					{
						mathsD:
						video maths;
						
						//Function to show list and other options of selected object
						chooseOption = videoOptionsScreen(maths, "*|*|*|*|*|*|*|*|*   Maths   *|*|*|*|*|*|*|*|*", "includes\\data\\math-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto lectures;
						}else{
							goto mathsD;
						}
						
					}
					break;
				
				//English Videos
				case 2:
					{
						englishD:
						video english;
						chooseOption = videoOptionsScreen(english, "*|*|*|*|*|*|*|*|*   English   *|*|*|*|*|*|*|*|*", "includes\\data\\english-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto lectures;
						}else{
							goto englishD;
						}
					}
					break;
					
				
				//Urdu Videos
				case 3:
					{
						urduD:
						video urdu;
						chooseOption = videoOptionsScreen(urdu, "*|*|*|*|*|*|*|*|*   Urdu   *|*|*|*|*|*|*|*|*", "includes\\data\\urdu-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto lectures;
						}else{
							goto urduD;
						}
					}
					break;
					
				
				//Social Studies Videos
				case 4:
					{
						socialStudiesD:
						video socialStudies;
						chooseOption = videoOptionsScreen(socialStudies, "*|*|*|*|*|*|*|*|*   Social Studies   *|*|*|*|*|*|*|*|*", "includes\\data\\social-studies-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto lectures;
						}else{
							goto socialStudiesD;
						}
					}
					break;
				
				//Science Videos
				case 5:
					{
						scienceD:
						video science;
						chooseOption = videoOptionsScreen(science, "*|*|*|*|*|*|*|*|*   Science   *|*|*|*|*|*|*|*|*", "includes\\data\\science-lecs-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto lectures;
						}else{
							goto scienceD;
						}
					}
					break;
					
				//Other Videos
				case 6:
					{
						otherSubjectLecsD:
						video otherSubjectLecs;
						chooseOption = videoOptionsScreen(otherSubjectLecs, "*|*|*|*|*|*|*|*|*   Other Videos | Subject Lectures   *|*|*|*|*|*|*|*|*", "includes\\data\\other-lecs-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto lectures;
						}else{
							goto otherSubjectLecsD;
						}
					}
					break;
				default:
					goto lectures;
					break;
			}
				
			
			break;
			
			
			
		//Programming Tutorials Options
		case 2:
			programming:
			welcomeText("*|*|*|*|*|*|*|*|*   Programming Tutorials   *|*|*|*|*|*|*|*|*");
			cout<<"1: HTML and CSS\n"
			<<"2: Javascript\n"
			<<"3: PHP\n"
			<<"4: C++\n"
			<<"5: C#\n"
			<<"6: Java\n"
			<<"7: Other...\n"
			<<"0: Go back\n\n"
			<<"Select an option to proceed: ";
			
			cin>>chooseOption;
			
			switch(chooseOption){
				case 0:
					goto learning;
					break;
					
				//HTML videos
				case 1:
					{
						htmlD:
						video html;
						
						//Function to show list and other options of selected object
						chooseOption = videoOptionsScreen(html, "*|*|*|*|*|*|*|*|*   HTML   *|*|*|*|*|*|*|*|*", "includes\\data\\html-proramming-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto programming;
						}else{
							goto htmlD;
						}
						
					}
					break;
					
				//Javascript Videos
				case 2:
					{
						javascriptD:
						video javascript;
						chooseOption = videoOptionsScreen(javascript, "*|*|*|*|*|*|*|*|*   Javascript   *|*|*|*|*|*|*|*|*", "includes\\data\\javascript-programming-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto programming;
						}else{
							goto javascriptD;
						}
					}
					break;
					
				
				//PHP Videos
				case 3:
					{
						phpD:
						video php;
						chooseOption = videoOptionsScreen(php, "*|*|*|*|*|*|*|*|*   PHP   *|*|*|*|*|*|*|*|*", "includes\\data\\php-programming-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto programming;
						}else{
							goto phpD;
						}
					}
					break;
				
				//C++ Videos
				case 4:
					{
						cppD:
						video cpp;
						chooseOption = videoOptionsScreen(cpp, "*|*|*|*|*|*|*|*|*   C++   *|*|*|*|*|*|*|*|*", "includes\\data\\cpp-programming-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto programming;
						}else{
							goto cppD;
						}
					}
					break;
					
				//C# Videos
				case 5:
					{
						cSharpD:
						video cSharp;
						chooseOption = videoOptionsScreen(cSharp, "*|*|*|*|*|*|*|*|*   C#   *|*|*|*|*|*|*|*|*", "includes\\data\\csharp-programming-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto programming;
						}else{
							goto cSharpD;
						}
					}
					break;
						
				//Java Videos
				case 6:
					{
						javaD:
						video java;
						chooseOption = videoOptionsScreen(java, "*|*|*|*|*|*|*|*|*   Java   *|*|*|*|*|*|*|*|*", "includes\\data\\java-programming-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto programming;
						}else{
							goto javaD;
						}
					}
					break;
						
				//Other Videos
				case 7:
					{
						otherProgrammingTutD:
						video otherProgrammingTut;
						chooseOption = videoOptionsScreen(otherProgrammingTut, "*|*|*|*|*|*|*|*|*   Other Videos | Programming Tutorials   *|*|*|*|*|*|*|*|*", "includes\\data\\other-programming-videos.vidList", chooseOption);
						if(chooseOption == 0){
							goto programming;
						}else{
							goto otherProgrammingTutD;
						}
					}
					break;
					
				default:
					goto programming;
					break;
			}
				
			
			break;
			
		//Motivational Videos
		case 3:
			{
				motivationalD:
				video motivational;
				chooseOption = videoOptionsScreen(motivational, "*|*|*|*|*|*|*|*|*   Motivational Videos   *|*|*|*|*|*|*|*|*", "includes\\data\\motivational-videos.vidList", chooseOption);
				if(chooseOption == 0){
					goto learning;
				}else{
					goto motivationalD;
				}
				break;
			
			}
		
		//Other Learning Videos
		case 4:
			{
				otherLearningD:
				video otherLearning;
				chooseOption = videoOptionsScreen(otherLearning, "*|*|*|*|*|*|*|*|*   Other Learning   *|*|*|*|*|*|*|*|*", "includes\\data\\other-learning-videos.vidList", chooseOption);
				if(chooseOption == 0){
					goto learning;
				}else{
					goto otherLearningD;
				}
				break;
			}
			
		default:
			goto learning;
			break;
	}
	
	break;
