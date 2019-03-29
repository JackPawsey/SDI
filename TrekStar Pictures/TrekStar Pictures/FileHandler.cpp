#include "pch.h"
#include "FileHandler.h"
#include <iostream>

using namespace std;

FileHandler::FileHandler()
{
}


FileHandler::~FileHandler()
{
}

/*
int load_node_data_f(node NodeArray[])
{
	ifstream inFile("node data.txt");

	if (!inFile)
	{
		cout << "Node Data file missing." << endl;
		return 1;
	}

	for (int x = 0; x < NUMBEROFNODES; x++)
	{
		inFile >> NodeArray[x].node_ID >> NodeArray[x].node_IP >> NodeArray[x].bandwidth >> NodeArray[x].delay;

		for (int y = 0; y < 3; y++)
		{
			inFile >> NodeArray[x].node_relationship_table[y].node_ID >> NodeArray[x].node_relationship_table[y].distance;
		}
	}
	inFile.close();

	return 0;
}

void output_node_data_f(node NodeArray[])
{
	print("Node Data:");

	for (int x = 0; x < NUMBEROFNODES; x++)
	{
		cout << NodeArray[x].node_ID << " " << NodeArray[x].node_IP << " " << NodeArray[x].bandwidth << " " << NodeArray[x].delay << " ";

		for (int y = 0; y < 3; y++)
		{
			cout << NodeArray[x].node_relationship_table[y].node_ID << " " << NodeArray[x].node_relationship_table[y].distance << " ";
		}
		cout << endl;
	}
	cout << endl;
	main_menu(NodeArray);
}
*/
