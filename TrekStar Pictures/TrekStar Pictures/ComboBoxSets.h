#pragma once
#include <string>
#include "vector"
#include "ProjectMaterials.h"
#include "SingleSidedDVD.h"
#include "DoubleSidedDVD.h"

using namespace std;

class ComboBoxSets : public ProjectMaterials
{
public:
	ComboBoxSets();
	~ComboBoxSets();

private:
	string packaging;
	vector<SingleSidedDVD> singleSidedDVDs;
	vector<DoubleSidedDVD> doubleSidedDVDs;
};

