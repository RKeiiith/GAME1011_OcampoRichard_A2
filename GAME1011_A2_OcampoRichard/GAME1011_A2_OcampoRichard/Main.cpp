/*
GAME1011 - Advanced Programming (Assignment 2)
Text Based Adventure Game

Student: Richard Ocampo (101332726)

Prof. Wallace Balaniuc and Joss Moo Young 
*/

#include <iostream>
#include <fstream>
#include <string>
#include "StoryOutcome.h"
#include "StoryStart.h"


using namespace std;

int main()
{

	//Instance for starting the story game
	StoryStart beginStory;


	//Output a message before starting the game

	cout << "---------------------------------------------" << endl;
	cout << "GAME1011 - Advanced Programming Assignment 2" << endl;
	cout << "Student: Richard Ocampo (101332726)" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Instructions:" << endl;
	cout << "1. There will be four scenarios." << endl;
	cout << "2. Four of which you must make a choice." << endl;
	cout << "3. You MUST type exactly how the choice is displayed. Text is case sensitive!" << endl;
	cout << "4. Once you go through the 4 story scenarios, the program will print the ending in a txt file depending on your actions!" << endl;
	cout << "----------Hit any key to start-------------" << endl;
	getchar();
	


	//Start game
	system("CLS");
	beginStory.startStoryGame();


	

	

	
}