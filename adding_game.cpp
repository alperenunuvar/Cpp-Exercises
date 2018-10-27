/* 
	Input n elements in an array.
	Print sum of max n-1 elements and sum of min n-1 elements.
*/

#include <iostream>

#define DEFAULT_SIZE 1024

using namespace std;

int main()
{
	// Arrays
	int array_numbers[DEFAULT_SIZE];

	// Variables
	int i;
	int biggestElement;
	int smallestElement;
	int sum;
	int arraySize;

	sum = 0;	
	cout << "Input an array size = ";
	cin >> arraySize;
	if(arraySize>2)
	{
		for(i=0;i<arraySize;i++)
		{
			cout << i+1 << ". Input an element = ";
			cin >> array_numbers[i];
			sum+=array_numbers[i];
		}
		biggestElement = array_numbers[0];
		smallestElement = array_numbers[0];
		cout << "Array elements = ";
		for(i=0;i<arraySize;i++)
		{
			cout << array_numbers[i] << " ";
			if(biggestElement<=array_numbers[i])
			{
				biggestElement = array_numbers[i];
			}
			if(smallestElement>=array_numbers[i])
			{
				smallestElement = array_numbers[i];
			}
		}
		cout << endl;
		cout << "Biggest element = " << biggestElement << endl;
		cout << "Smallest element = " << smallestElement << endl;
		cout << "Sum of max " << arraySize-1 << " elements = " << sum - smallestElement << endl;
		cout << "Sum of min " << arraySize-1 << " elements = " << sum - biggestElement << endl;
	}
	else
	{
		cout << "Array size must greater than 2." << endl; 
	}	
	return 0;
}