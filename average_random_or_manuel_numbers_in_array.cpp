#include <iostream>
#include <stdlib.h>

using namespace std;

#define DEFAULT_SIZE 1024

int main()
{
	// Arrays
	int array_numbers[DEFAULT_SIZE];

	// Variables
	float total;
	float average;
	int range;
	int arraySize;
	int i;
	char choice;

	cout << "Input an array size = ";
	cin >> arraySize;
	cout << "Choice to input elements random or manuel (R/M) = ";
	cin >> choice;
	if(((int)choice==82)||((int)choice==114)) // R-r
	{
		cout << "Input a range for elements (0..x) = ";
		cin >> range;
		total = 0;
		for(i=0;i<arraySize;i++)
		{
			array_numbers[i] = rand()%(range+1);
			total += array_numbers[i];
		}
	}
	else if(((int)choice==77)||((int)choice==109)) // M-m
	{
		for(i=0;i<arraySize;i++)
		{
			cout << i+1 << ". input an element = ";
			cin >> array_numbers[i];
			total += array_numbers[i];
		}
	}
	else
	{
		cout << "You must only input M/m or R/r." << endl;
	}
	if(((int)choice==77)||((int)choice==109)||((int)choice==82)||((int)choice==114))			
	{
		average = total / arraySize;
		cout << "Array elements = ";
		for(i=0;i<arraySize;i++)
		{
			cout << array_numbers[i] << " ";
		}
		cout << endl;
		cout << "Sum of elements = " << total << endl;
		cout << "Average of elements = " << (float)average << endl;
	}
	return 0;
}