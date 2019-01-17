#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	int j;	
	int size_array1;
	int size_array2;
	bool equal;

	size_array1 = 2;
	size_array2 = 8;
	
	// Arrays
	int array_number1[size_array1];
	int array_number2[size_array2];

	srand(time(NULL));
	for(i=0;i<size_array1;i++)
	{
		array_number1[i] = (rand()%7)+1;
	}
	for(i=0;i<size_array2;i++)
	{
		array_number2[i] = (rand()%7)+1;
	}
	cout << "Array 1 = ";
	for(i=0;i<size_array1;i++)
	{
		cout << array_number1[i] << " ";
	}
	cout << endl;
	cout << "Array 2 = ";
	for(i=0;i<size_array2;i++)
	{
		cout << array_number2[i] << " ";
	}
	cout << endl;	
	for(i=0;i<size_array2;i++)
	{	
		equal = true;	
		for(j=0;j<size_array1;j++)
		{
			if(array_number1[j]!=array_number2[i+j])
			{	
				equal = false;
				break;
			}
		}
		if(equal)
		{
			cout << "Array 1 exists as subarray in Array 2." << endl;
		}	
	}
	return 0;
}