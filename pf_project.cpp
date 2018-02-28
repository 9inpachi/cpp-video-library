/*
MY VIDEO LIBRARY
C++ Project by Fawad Ali (9inpachi)
Made Opensource by me :)
Enjoy
*/
#include<iostream>
#include<fstream>
#include <direct.h>
using namespace std;

ifstream readFile;
ofstream writeToFile;
int chooseOption;
	
class video{
	public:
		//All variables used
		string fileNameOutput;
		string fileNameArray[50];
		int totalFiles;
		int noOfFiles;
		int deleteVideoFile;
		
		
		//Function for outputting Video List from file
		readVideoList(string saveFileName){
			const char * c = saveFileName.c_str();  //Converting to a const char to be able to argument as a constant
			//Read file and output list
			readFile.open(c);
			readFile.seekg(0, readFile.beg);
			
			while(readFile >> totalFiles >> fileNameOutput){
				cout<<totalFiles<<": "<<fileNameOutput<<endl;
				fileNameArray[totalFiles] = "vlc "+fileNameOutput;
				noOfFiles++;
			}
			if(noOfFiles==0){
				cout<<"No videos to play. :( Add a video using the options below. :)\n\n";
			}
			//Closing file after reading
			readFile.close();
		}
		
		
		//Function for adding Video List to file
		addVideosToList(string saveFileName){
			//Files to be written
			cout<<"\nSpecify the number of videos to add: ";
			cin>>totalFiles;
			cout<<"\nEnter the path of videos. The file must be a video or else it will not play.\n";
			
			const char * c = saveFileName.c_str();
			writeToFile.open(c, ios::app);
			
			for(int i = 1; i<=totalFiles; i++){
				cout<<"File path: ";
				cin>>fileNameArray[noOfFiles+i];
				writeToFile<<noOfFiles+i<<" "<<fileNameArray[noOfFiles+i]<<"\n";
			}
			
			//closing file after writing
			writeToFile.close();
		}
		
		
		//Play video
		playVideo(int chooseOption){
			for(int i=1; i<=noOfFiles; i++){
				if(chooseOption == i){
					
					_chdir("C:\\Program Files\\VideoLAN\\VLC");
					const char * c = fileNameArray[i].c_str();  //Converting to a const char to be able to argument to system function
					system(c);
					
				}
			}
			exit(1);
		}
		
		
		//Function for deleting a Video from list
		removeVideo(string saveFileName){
			//Files to be written
			cout<<"\nEnter the number of video to remove: ";
			cin>>deleteVideoFile;
			const char * c = saveFileName.c_str();  //Converting to a const char to be able to argument as a constant
			//Read file and output list
			readFile.open(c);
			readFile.seekg(0, readFile.beg);
			writeToFile.open("includes\\data\\temp.txt");
			
			while(readFile >> totalFiles >> fileNameOutput){
				if(deleteVideoFile != totalFiles){
					writeToFile<<totalFiles<<" "<<fileNameOutput<<endl;
				}
			}
			
			readFile.clear();
			writeToFile.close();
			readFile.close();
			remove(c);
			rename("includes\\data\\temp.txt", c);
		}
		
		
		moreOptions(){
			cout<<totalFiles+1<<": Add Videos\n"
			<<totalFiles+2<<": Remove Video\n"
			<<"0: Go back\n\n"
			<<"Select an option to proceed: ";
		}
		
};


//Top text function
welcomeText(string heading){
	system("cls");
	cout<<"***************************************************************************\n"
	<<"*  Welcome to Your Video Library.                                         *\n*  A place where you can easily arrange and watch your favorite videos. :)*\n"
	<<"***************************************************************************\n\n";
	cout<<heading<<"\n\n";
}


//Function to display all options for video object
videoOptionsScreen(video videoObject, string welcome, string vidListFilePath, int chooseOption){
	socialStudiesD:
	welcomeText(welcome);

	
	const char * c = vidListFilePath.c_str();  //Converting to a const char to be able to argument to system function
	videoObject.readVideoList(c);
	videoObject.moreOptions();
	
	cin>>chooseOption;
	
	if(chooseOption>0 && chooseOption<=videoObject.noOfFiles){
		videoObject.playVideo(chooseOption);
	}else if(chooseOption == (videoObject.totalFiles)+1){
		videoObject.addVideosToList(c);
	}else if(chooseOption == (videoObject.totalFiles)+2){
		videoObject.removeVideo(c);
	}
	
	return chooseOption;
}


int main(){
	
	home:
	system("cls");
	
	
	//Start Screen with different options
	welcomeText("*|*|*|*|*|*|*|*|*   Start Screen   *|*|*|*|*|*|*|*|*");
	cout<<"1: Learning\n"
	<<"2: Entertainment\n"
	<<"3: Technology\n"
	<<"4: Nature\n"
	<<"5: Other...\n"
	<<"0: Exit\n\n"
	<<"Select an option to proceed: ";
	
	cin>>chooseOption;
	
	switch(chooseOption){
		
		case 0:
			exit(1);
			break;
			
		case 1:
			#include "includes/learning.cpp"
		case 2:
			#include "includes/entertainment.cpp"
		case 3:
			#include "includes/technology.cpp"
		case 4:
			#include "includes/nature.cpp"
		case 5:
			{
				otherHomeD:
				video otherHome;
				chooseOption = videoOptionsScreen(otherHome, "*|*|*|*|*|*|*|*|*   Other Videos | Home   *|*|*|*|*|*|*|*|*", "includes\\data\\other-home-videos.vidList", chooseOption);
				if(chooseOption == 0){
					goto home;
				}else{
					goto otherHomeD;
				}
			}
			break;
			
		//Default for home	
		default:
			goto home;
			break;
	}
}
