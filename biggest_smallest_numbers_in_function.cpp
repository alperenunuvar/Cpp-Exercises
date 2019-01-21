#include <iostream>

using namespace std;

// Prototypes
void printArray(int *array_numbers, int arraySize);
void bigSmal(int *array_numbers, int arraySize);

void printArray(int *array_numbers, int arraySize)
{
	// Variables
	int i;

	cout << "Elements of array = ";
	for(i=0;i<arraySize;i++)
	{
		cout << array_numbers[i] << " ";
	}
	cout << endl;
}

void bigSmal(int *array_numbers, int arraySize)
{
	// Variables
	int i;
	int biggest;
	int smallest;

	biggest=array_numbers[0];
	smallest=array_numbers[0];
	for(i=0;i<arraySize;i++)
	{
		if(array_numbers[i]>biggest)
		{
			biggest = array_numbers[i];
		}
		if(array_numbers[i]<smallest)
		{
			smallest = array_numbers[i];
		}
	}
	cout << "Smallest = " << smallest << "\nBiggest = " << biggest << endl;
	cout << "Subtraction of " << biggest << " and " << smallest << " is " << biggest-smallest << endl;
}

int main()
{
	// Arrays
	int *array_numbers;

	// Variables
	int i;	
	int numOfInt;	

	cout << "Input number of elements = ";
	cin >> numOfInt;
	if(numOfInt>2)
	{
		array_numbers = (int *)malloc(sizeof(int)*numOfInt);
		cout << "Input your elements = " << endl;
		i=0;
		while(i<numOfInt)
		{
			cout << i+1 << ". Element = ";
			cin >> *(array_numbers+i);
			i++;
		}
		printArray(array_numbers, numOfInt);
		bigSmal(array_numbers, numOfInt);
	}
	else
	{
		cout << "Number of elements must be at least 3." << endl;
	}
	return 0;
}