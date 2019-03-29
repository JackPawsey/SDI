#pragma once
#include <string>
#include "vector"

using namespace std;

class ProjectMaterials
{
public:
	ProjectMaterials();
	~ProjectMaterials();

	int getIdentificationNumber();

protected:
	int identificationNumber;
	string title;
	string format;
	string audioFormat;
	int runTime;
	string language;
	double retailPrice;
	string subtitles;
	string frameAspect;
};

