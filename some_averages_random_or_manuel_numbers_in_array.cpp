#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

#define DEFAULT_SIZE 1024

int main()
{
	// Arrays
	int array_numbers[DEFAULT_SIZE];

	// Variables
	float total;
	float average;
	float product;
	float geoAverage;
	float oddAverage;
	float evenAverage;	
	int bsEvenAverage; // average of biggest and smallest even numbers
	int biggestEven;
	int smallestEven;
	int sumOfOdd;
	int sumOfEven;
	int counterOdd;
	int counterEven;	
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
		product=1;
		sumOfOdd=0;
		sumOfEven=0;
		counterOdd=0;
		counterEven=0;		
		biggestEven = array_numbers[0];
		smallestEven = array_numbers[0];
		cout << "Array elements = ";
		for(i=0;i<arraySize;i++)
		{
			cout << array_numbers[i] << " ";
			product*=array_numbers[i];
			if(array_numbers[i]%2!=0)
			{
				sumOfOdd+=array_numbers[i];
				counterOdd++;
			}
			else
			{
				sumOfEven+=array_numbers[i];
				counterEven++;
				if(biggestEven<array_numbers[i])
				{
					biggestEven = array_numbers[i];
				}
				if(smallestEven>array_numbers[i])
				{
					smallestEven = array_numbers[i];
				}		
			}						
		}		
		cout << endl;
		average = total / arraySize;
		geoAverage = pow(product, (float)1/arraySize);
		oddAverage = sumOfOdd/counterOdd;
		evenAverage = sumOfEven/counterEven;
		bsEvenAverage = (biggestEven+smallestEven)/2;		
		cout << "Sum of elements = " << total << endl;
		cout << "Average of elements = " << average << endl;
		cout << "Average of odd elements = " << oddAverage << endl;
		cout << "Average of even elements = " << evenAverage << endl;
		cout << "Average of biggest even element and smallest even element = " << bsEvenAverage << endl;
		cout << "Geometrical average of elements = " << geoAverage << endl;
	}
	return 0;
}