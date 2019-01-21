#include <iostream>

using namespace std;

int main()
{
	/*
	int number1;
	int number2;
	int number3;
	int number4;
	int number5;

	cout << "Input 5 integers = ";
	cin >> number1 >> number2 >> number3 >> number4 >> number5;
	cout << number1 << ", " << number2 << ", " << number3 << ", " << number4 << ", " << number5 << endl;
	*/
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	int array_numbers[5];
	int i;

	cout << "Input 5 integers = ";
	for(i=0;i<5;i++)
	{
		cin >> array_numbers[i];
	}
	cout << endl;
	for(i=0;i<5;i++)
	{
		cout << array_numbers[i] << " ";
	}
	cout << endl;
	*/
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int *p;
	int i;

	p = (int *)malloc(sizeof(int)*5);

	cout << "Input 5 integers = ";
	for(i=0;i<5;i++)
	{
		cin >> *(p+i);
	}
	cout << endl;
	for(i=0;i<5;i++)
	{
		cout << *(p+i) << " ";
	}
	cout << endl;
	return 0;
}