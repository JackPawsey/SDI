#pragma once
#include <string>
#include "vector"
#include "Crew.h"

using namespace std;

class Project
{
public:
	Crew crew;

	Project();
	~Project();

	void setTitle(string title);
	void setSummary(string summary);
	void setGenre(string genre);
	void setReleaseDate(string releaseDate);
	void setFilmingLocations(vector<string> filmingLocations);
	void setLanguage(string language);
	void setRunTime(int runTime);
	void setKeywords(vector<string> keywords);
	void setWeeklyTicketSale(int weeklyTicketSale);
	void setUnderProduction(bool underProduction);
	void setMaterials(vector<string> materials);

	void printInfo();

private:
	string title;
	string summary;
	string genre;
	string releaseDate;
	vector<string> filmingLocations;
	string language;
	int runTime;
	vector<string> keywords;
	int weeklyTicketSale;
	bool underProduction;
	vector<string> materials;
};

