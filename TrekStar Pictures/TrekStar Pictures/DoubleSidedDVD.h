#pragma once
#include <string>
#include "vector"
#include "ProjectMaterials.h"

using namespace std;

struct sideInfo {
	string chapters;
	string bonusFeatures;
	string languages;
};

class DoubleSidedDVD : public ProjectMaterials
{
public:
	DoubleSidedDVD();
	~DoubleSidedDVD();

private:
	string packaging;
	vector<string> languageTracks;
	vector<string> subtitles;
	vector<string> bonusFeatures;
	sideInfo sideA;
	sideInfo sideB;
};

