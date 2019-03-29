#include "pch.h"
#include "TrekStarPictures.h"
#include <iostream>

using namespace std;

int main()
{
	TrekStarPictures application;
	application.mainLoop();
}

//Sort projects
void bubbleSort(int array[], int array_size) {
	int temp;
	int count = 0;

	for (int stop = array_size - 1; stop > 0; stop--)
	{
		for (int check = 0; check < stop; check++)
		{
			if (array[check] > array[check + 1])
			{
				temp = array[check];
				array[check] = array[check + 1];
				array[check + 1] = temp;
				count++;
			}
		}
	}
	cout << count << " swaps" << endl;
}