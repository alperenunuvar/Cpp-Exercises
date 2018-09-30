#include <iostream>

using namespace std;

int main()
{
	// Arrays
	int numbers[3] = {10,9,8};

	// Variables
	int i;

	cout << "numbers[1] = " << numbers[1] << endl;
	cout << "Numbers = ";
	for(i=0;i<3;i++)
	{
		cout << numbers[i] << " ";
	}
	cout << "\nReverse Numbers = ";
	for(i=2;i>=0;i--)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
	for(i=0;i<3;i++)
	{
		cout << "Numbers[" << i << "]" << " = " << numbers[i] << endl;
	}
	for(i=0;i<3;i++)
	{
		cout << "Enter " << i+1 << ". numbers = ";
		cin >> numbers[i];
	}
	for(i=0;i<3;i++)
	{
		cout << numbers[i] << " ";
	}
	cout << "\nRandom Numbers (0-100) = ";
	srand(time(NULL));
	for(i=0;i<3;i++)
	{
		numbers[i] = rand()%101;
		cout << numbers[i] << " ";
	}
	cout << "\nNumbers = ";
	for(i=0;i<3;i++)
	{
		cout << numbers[i] << " "; 
	}
	cout << "\nRandom Order = ";
	for(i=0;i<3;i++)
	{
		cout << numbers[rand()%3] << " ";
	}
	cout << endl;
	return 0;
}
