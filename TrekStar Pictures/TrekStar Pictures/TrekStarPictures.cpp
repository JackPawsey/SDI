#include "pch.h"
#include "TrekStarPictures.h"
#include <iostream>

using namespace std;

//Constructor
TrekStarPictures::TrekStarPictures() {
}

//Destructor
TrekStarPictures::~TrekStarPictures() {
}

//Create a new project
void TrekStarPictures::createNewProject() {
	Project newProject;

	newProject.setTitle(this->getStringInput("Enter project title: "));
	newProject.setSummary(this->getStringInput("Enter project summary: "));
	newProject.setGenre(this->getStringInput("Enter project genre: "));
	newProject.setReleaseDate(this->getStringInput("Enter project release date: "));

	vector<string> filmingLocations;
	filmingLocations.push_back("location 1");
	filmingLocations.push_back("location 2");
	filmingLocations.push_back("location 2");
	newProject.setFilmingLocations(filmingLocations);

	newProject.setLanguage(this->getStringInput("Enter project language: "));
	newProject.setRunTime(this->getIntInput("Enter project runtime: "));
	
	vector<string> keywords;
	keywords.push_back("yes");
	keywords.push_back("no");
	keywords.push_back("maybe");
	newProject.setKeywords(keywords);

	newProject.setWeeklyTicketSale(this->getIntInput("Enter ticket sale amount: "));
	newProject.setUnderProduction(this->getBoolInput("Is the project under production? (Yes/No): "));

	vector<string> materials;
	materials.push_back("material 1");
	materials.push_back("material 2");
	materials.push_back("material 3");
	newProject.setMaterials(materials);

	//Set project crew details
	newProject.crew.setProducer("producer");
	newProject.crew.setDirector("director");
	newProject.crew.setWriter("writer");
	
	vector<string> actors;
	actors.push_back("actor1");
	actors.push_back("actor2");
	actors.push_back("actor3");
	newProject.crew.setActors(actors);

	newProject.crew.setEditor("Editor");
	newProject.crew.setProductionDesigner("production designer");
	newProject.crew.setSetDecorator("set decorator");
	newProject.crew.setCustumeDesigner("custume designer");

	this->projectList.push_back(newProject);
	cout << endl;
}

//Get input from console as string
string TrekStarPictures::getStringInput(string message) {
	string input;

	cout << message;

	cin >> input;

	return input;
}

//Get input from console and validate if its an integer and positive
int TrekStarPictures::getIntInput(string message) {
	int input;
	bool exit = false;

	cout << message;

	while (exit == false)
	{
		cin >> input;

		if (cin.fail())
		{
			cout << "Please enter an integer: ";
			cin.clear();
			cin.ignore(10, '\n');
		}
		else if (input < 1)
		{
			cout << "Enter a positive integer: ";
		}
		else
		{
			break;
		}
	}

	return input;
}

//Get input from console and equate it to true or false
bool TrekStarPictures::getBoolInput(string message) {
	string input;
	bool condition;

	cout << message;

	cin >> input;

	if (input == "Yes") {
		condition = true;
	}
	else if (input == "No") {
		condition = false;
	}

	return condition;
}

//Application mainloop
void TrekStarPictures::mainLoop() {
	int choice = NULL;

	print("Trekstar Pictures");
	cout << endl;

	while (choice != 6)
	{
		mainMenu();
		choice = getMenuChoice();

		if (choice == 1)
		{
			printProjects(projectList, projectList.size());
		}
		else if (choice == 2)
		{
			this->createNewProject();
		}
		else if (choice == 3)
		{
			print("Not supported yet!");
		}
		else if (choice == 4)
		{
			print("Not supported yet!");
		}
		else if (choice == 5)
		{
			print("Not supported yet!");
		}
	}
}

//Prints all menu options
void TrekStarPictures::mainMenu() {
	print("Main Menu:");
	cout << endl;
	print("1 - View Projects");
	print("2 - Add New Project");
	print("3 - Remove Project");
	print("4 - Search For Project");
	print("5 - Modify Project");
	print("6 - Exit");
	cout << endl;
}

//Get the user choice from menu options
int TrekStarPictures::getMenuChoice() {
	int choice = NULL;
	bool exit = false;

	cout << "Select option: ";

	while (exit == false)
	{
		cin >> choice;

		if (cin.fail())
		{
			cout << "Please enter an integer." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}
		else if ((choice < 0) || (choice > 6))
		{
			print("Please enter a number between 1 and 5.");
		}
		break;
	}
	cout << endl;
	return choice;
}

//Print projects
void TrekStarPictures::printProjects(vector<Project> projectList, int size) {
	for (int i = 0; i < size; i++)
	{
		projectList[i].printInfo();
	}

	cout << endl;
}

//Print message in console
void TrekStarPictures::print(string message) {
	cout << message << endl;
}
