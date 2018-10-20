#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	// Variables
	int i;
	int j;
	int arraySize;
	int range;	
	int biggestNumber;	
	int arrayIndex;
	int biggestArraySize;
	int total;

	cout << "Input an array size = ";
	cin >> arraySize;
	
	//Arrays
	int array_randomNumbers[arraySize];
	int array_biggestNumbers[3];

	cout << "Input elements' range (0..x) = ";
	cin >> range;
	if((range>0)&&(arraySize>2))
	{
		// assign elements to array randomly
		for(i=0;i<arraySize;i++)
		{
			array_randomNumbers[i] = rand()%(range+1);
		}
		// printing array
		cout << "Array Elements = ";
		for(i=0;i<arraySize;i++)
		{
			cout << array_randomNumbers[i] << " ";
		}
		cout << endl;
		biggestArraySize = 0;
		for(j=0;j<3;j++) // because we want 3 biggest numbers
		{
			biggestNumber = -1;
			for(i=0;i<arraySize;i++)
			{
				if(array_randomNumbers[i]>=biggestNumber)
				{
					biggestNumber = array_randomNumbers[i];
				}
			}
			// finding biggest number's index in array, because index will be delete
			for(i=0;i<arraySize;i++)
			{
				if(biggestNumber==array_randomNumbers[i])
				{
					arrayIndex = i;
				}
			}
			array_biggestNumbers[biggestArraySize] = biggestNumber; // assign biggest number into an array
			biggestArraySize++;
			array_randomNumbers[arrayIndex] = -1; // biggest number's index deleted
			// this loop ignores to prints same second biggest number
			for(i=0;i<arraySize;i++)
			{
				if(biggestNumber==array_randomNumbers[i])
				{
					array_randomNumbers[i] = -1;
				}
			}	
		}
		// printing biggest numbers array
		cout << "3 biggest numbers in an array = ";
		for(i=0;i<3;i++)
		{
			if(array_biggestNumbers[i]>0) // ignores to prints -1, if array size does 3 and includes same numbers in an array
			{
				cout << array_biggestNumbers[i] << " ";
			}			
		}
		cout << endl;
		// sum of 3 biggest numbers in array
		total = 0;
		for(i=0;i<3;i++)
		{
			total += array_biggestNumbers[i];
		}
		cout << "Sum of the 3 biggest numbers = " << total << endl;
	}
	else
	{
		cout << "Range must be positive or array size greater than 2." << endl;
	}	
	return 0;
}