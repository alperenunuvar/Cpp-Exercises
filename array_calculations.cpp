#include <iostream>

using namespace std;

int main()
{
	// Arrays
	int numbersArray[5];

	// Variables
	int total;
	int average;
	int i;
	int smallest;
	int biggest;

	total=0;
	average=0;
	for(i=0;i<5;i++)
	{
		cout << i+1 << ". Input an integer = ";
		cin >> numbersArray[i];
		total+=numbersArray[i];
	}
	average=total/5;
	smallest = numbersArray[0];
	biggest = numbersArray[0];
	for(i=0;i<5;i++)
	{
		if(smallest>=numbersArray[i])
		{
			smallest = numbersArray[i];
		}
		if(biggest<=numbersArray[i])
		{
			biggest = numbersArray[i];
		}
	}
	cout << "Biggest Integer = " << biggest << "\nSmallest Integer = " << smallest << "\nSum of Integer = " << total << "\nAverage of Integer = " << average << endl;
}