#include <iostream>

using namespace std;

int main()
{
	// Variables
	int number1;
	int number2;
	
	cout << "Input first integer = " << endl;
	cin >> number1;
	cout << "Input second integer = " << endl;
	cin >> number2;
	if(number1<number2)
	{
		cout << number1 << " is smaller than " << number2 << "." << endl;
	}
	if(number2<number1)
	{
		cout << number2 << " is smaller than " << number1 << "." << endl;
	}
	if(number1==number2)
	{
		cout << number1 << " and " << number2 << " are equal." << endl;
	}
	else
	{
		cout << number1 << " and " << number2 << " are not equal." << endl;
	}
	return 0;
}
