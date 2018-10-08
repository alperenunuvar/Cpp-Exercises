#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	int j;
	int arrayCounter=0;

	// Arrays
	int arr1[6] = {9,3,10,8,9,11};
	int arr2[5] = {2,2,3,9,10};
	int arrCommon[10];

	cout << "1. Array = ";
	for(i=0;i<6;i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "2. Array = ";
	for(i=0;i<5;i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	arrayCounter=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr1[i]==arr2[j])
			{
				arrCommon[arrayCounter] = arr1[i];
				arrayCounter++;
				arr1[i] = -1;
				arr2[j] = -1;
			}
		}
	}	
	cout << "Common Elements = ";
	for(i=0;i<arrayCounter;i++)
	{
		if(arrCommon[i]>0)
		{
			cout << arrCommon[i] << " ";
		}		
	}
	cout << endl;
	return 0;
}