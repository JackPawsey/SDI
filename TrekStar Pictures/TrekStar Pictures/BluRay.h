#pragma once
#include <string>
#include "vector"
#include "ProjectMaterials.h"

using namespace std;

class BluRay : public ProjectMaterials
{
public:
	BluRay();
	~BluRay();

private:
	string packaging;
	vector<string> languageTracks;
	vector<string> subtitles;
	vector<string> bonusFeatures;
};

