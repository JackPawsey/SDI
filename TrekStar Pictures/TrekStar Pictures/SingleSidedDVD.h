#pragma once
#include <string>
#include "vector"
#include "ProjectMaterials.h"

using namespace std;

class SingleSidedDVD : public ProjectMaterials
{
public:
	SingleSidedDVD();
	~SingleSidedDVD();

private:
	string packaging;
	vector<string> languageTracks;
	vector<string> subtitles;
	vector<string> bonusFeatures;
};

