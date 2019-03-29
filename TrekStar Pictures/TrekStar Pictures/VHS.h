#pragma once
#include <string>
#include "vector"
#include "ProjectMaterials.h"

using namespace std;

class VHS : public ProjectMaterials
{
public:
	VHS();
	~VHS();

private:
	string packaging;
	string audioTrack;
};

