#include "pch.h"
#include "Crew.h"
#include <iostream>

using namespace std;

//Constructor
Crew::Crew(){
}

//Destructor
Crew::~Crew(){
}

//Set producer
void Crew::setProducer(string producer) {
	this->producer = producer;
}

//Set director
void Crew::setDirector(string director) {
	this->director = director;
}

//Set writer
void Crew::setWriter(string writer) {
	this->writer = writer;
}

//Set actors
void Crew::setActors(vector<string> actors) {
	this->actors = actors;
}

//Set editor
void Crew::setEditor(string editor) {
	this->editor = editor;
}

//Set production designer
void Crew::setProductionDesigner(string productionDesigner) {
	this->productionDesigner = productionDesigner;
}

//Set set decorator
void Crew::setSetDecorator(string setDecorator) {
	this->setDecorator = setDecorator;
}

//Set custume designer
void Crew::setCustumeDesigner(string custumeDesigner) {
	this->custumeDesigner = custumeDesigner;
}

//Display all crew information in console
void Crew::printInfo() {
	cout << this->producer << endl;
	cout << this->director << endl;
	cout << this->writer << endl;

	for (int x = 0; x < this->actors.size(); x++) {
		cout << this->actors[x] << endl;
	}

	cout << this->editor << endl;
	cout << this->productionDesigner << endl;
	cout << this->setDecorator << endl;
	cout << this->custumeDesigner << endl;
}
