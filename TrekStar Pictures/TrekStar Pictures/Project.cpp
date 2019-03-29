#include "pch.h"
#include "Project.h"
#include <iostream>

using namespace std;

//Constructor
Project::Project() {
}

//Destructor
Project::~Project() {
}

//Set title
void Project::setTitle(string title) {
	this->title = title;
}

//Set summary
void Project::setSummary(string summary) {
	this->summary = summary;
}

//Set genre
void Project::setGenre(string genre) {
	this->genre = genre;
}

//Set releaseDate
void Project::setReleaseDate(string releaseDate) {
	this->releaseDate = releaseDate;
}

//Set filmingLocations
void Project::setFilmingLocations(vector<string> filmingLocations) {
	this->filmingLocations = filmingLocations;
}

//Set language
void Project::setLanguage(string language) {
	this->language = language;
}

//Set runTime
void Project::setRunTime(int runTime) {
	this->runTime = runTime;
}

//Set keywords
void Project::setKeywords(vector<string> keywords) {
	this->keywords = keywords;
}

//Set weeklyTicketSale
void Project::setWeeklyTicketSale(int weeklyTicketSale) {
	this->weeklyTicketSale = weeklyTicketSale;
}

//Set whether project is under production
void Project::setUnderProduction(bool underProduction) {
	this->underProduction = underProduction;
}

//Set materials
void Project::setMaterials(vector<string> materials) {
	this->materials = materials;
}

//Display all project information in console
void Project::printInfo()
{
	cout << this->title << endl;
	cout << this->summary << endl;
	cout << this->genre << endl;
	cout << this->releaseDate << endl;
	
	for (int x = 0; x < this->filmingLocations.size(); x++) {
		cout << this->filmingLocations[x] << ", ";
	}
	cout << endl;
	
	cout << this->language << endl;
	cout << this->runTime << endl;
	
	for (int x = 0; x < this->keywords.size(); x++) {
		cout << this->keywords[x] << ", ";
	}
	cout << endl;

	cout << this->weeklyTicketSale << endl;

	if (this->underProduction) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	for (int x = 0; x < this->materials.size(); x++) {
		cout << this->materials[x] << ", ";
	}
	cout << endl;
	
	this->crew.printInfo();
}
