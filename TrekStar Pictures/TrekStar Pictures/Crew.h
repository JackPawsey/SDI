#pragma once
#include <string>
#include "vector"

using namespace std;

class Crew
{
public:
	Crew();
	~Crew();

	void setProducer(string producer);
	void setDirector(string director);
	void setWriter(string writer);
	void setActors(vector<string> actors);
	void setEditor(string editor);
	void setProductionDesigner(string productionDesigner);
	void setSetDecorator(string setDecorator);
	void setCustumeDesigner(string custumeDesigner);

	void printInfo();

private:
	string producer;
	string director;
	string writer;
	vector<string> actors;
	string editor;
	string productionDesigner;
	string setDecorator;
	string custumeDesigner;
};

