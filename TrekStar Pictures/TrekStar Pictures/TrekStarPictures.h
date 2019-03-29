#pragma once
#include <string>
#include "vector"
#include "Project.h"

using namespace std;

class TrekStarPictures
{
public:
	TrekStarPictures();
	~TrekStarPictures();

	void createNewProject();
	string getStringInput(string message);
	int getIntInput(string message);
	bool getBoolInput(string message);
	void mainLoop();
	void mainMenu();
	int getMenuChoice();
	void printProjects(vector<Project> projectList, int size);
	void print(string message);

private:
	vector<Project> projectList;
};

