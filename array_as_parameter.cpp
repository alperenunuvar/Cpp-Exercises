#include <iostream>

using namespace std;

// Prototypes
int sum(int *array, int arraySize);
int sub(int *array, int arraySize);
int mul(int *array, int arraySize);
int div(int *array, int arraySize);

int sum(int *array_numbers, int arraySize)
{
	// Variables
	int i;
	int summation;

	summation=0;
	for(i=0;i<arraySize;i++)
	{
		summation+=array_numbers[i];
	}
	return summation;
}

int sub(int *array_numbers, int arraySize)
{
	// Variables
	int i;
	int subtraction;

	subtraction=0;
	for(i=0;i<arraySize;i++)
	{
		subtraction-=array_numbers[i];
	}
	return subtraction;
}

int mul(int *array_numbers, int arraySize)
{
	// Variables
	int i;
	int multiplication;

	multiplication=1;
	for(i=0;i<arraySize;i++)
	{
		multiplication*=array_numbers[i];
	}
	return multiplication;
}

int div(int *array_numbers, int arraySize)
{
	// Variables
	int i;
	int division;

	division=1;
	for(i=0;i<arraySize;i++)
	{
		division*=array_numbers[i];
	}
	return division;
}

int main()
{
	// Arrays
	int *array_numbers;

	// Variables
	int numOfInt;
	int choice;
	int total;
	int i;

	total=0;
	cout << "Input number of integers = ";
	cin >> numOfInt;
	if(numOfInt>1)
	{
		array_numbers = (int *)malloc(sizeof(int)*numOfInt);
		cout << "Input " << numOfInt << " elements = ";
		for(i=0;i<numOfInt;i++)
		{
			cin >> *(array_numbers+i);
		}
		cout << "Your array = ";
		for(i=0;i<numOfInt;i++)
		{
			cout << *(array_numbers+i) << " ";
		}
		cout << endl;
		cout << "- Operations -" << endl;
		cout << "[1] Summation\n[2] Subtraction\n[3] Multiplication\n[4] Division" << endl;
		cout << "Select an operation = ";
		cin >> choice;
		switch(choice)
		{			
			case 1:
				total = sum(array_numbers, numOfInt);
				cout << "Summation = " << total << endl;
				break;
			case 2:
				total = sub(array_numbers, numOfInt);
				cout << "Subtraction = " << total << endl;
				break;
			case 3:
				total = mul(array_numbers, numOfInt);
				cout << "Multiplication = " << total << endl;
				break;
			case 4:
				total = div(array_numbers, numOfInt);
				cout << "Division = " << total << endl;
				break;
			default:
				cout << "You can only select these choices." << endl;
				break;
		}
	}
	else
	{
		cout << "Number of elements must at least 2." << endl;
	}
	return 0;
}