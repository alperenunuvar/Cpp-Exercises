#include <iostream>

using namespace std;

int main()
{
	// Variables
	int number1;
	int number2;
	int number3;
	
	cout << "Input 1st integer = " << endl;
	cin >> number1;
	cout << "Input 2nd integer = " << endl;
	cin >> number2;
	cout << "Input 3rd integer = " << endl;
	cin >> number3;
	if((number1==number2) && (number2==number3))
	{
		cout << number1 << " = " << number2 << " = " << number3 << endl;
	}
	if((number1<number2) && (number2<number3))
	{
		cout << number1 << " < " << number2 << " < " << number3 << endl;
	}
	if((number1==number2) && (number2<number3))
	{
		cout << number1 << " = " << number2 << " < " << number3 << endl;
	}
	if((number1<number3) && (number3<number2))
	{
		cout << number1 << " < " << number3 << " < " << number2 << endl;
	}
	if((number1==number3) && (number3<number2))
	{
		cout << number1 << " = " << number3 << " < " << number2 << endl;
	}
	if((number1<number3) && (number3==number2))
	{
		cout << number1 << " < " << number3 << " = " << number2 << endl;
	}
	if((number2<number1) && (number1<number3))
	{
		cout << number2 << " < " << number1 << " < " << number3 << endl;
	}
	if((number2<number3) && (number3<number1))
	{
		cout << number2 << " < " << number3 << " < " << number1 << endl;
	}
	if((number2==number3) && (number3<number1))
	{
		cout << number2 << " = " << number3 << " < " << number1 << endl;
	}
	if((number2<number3) && (number3==number1))
	{
		cout << number2 << " < " << number3 << " = " << number1 << endl;
	}
	if((number3<number1) && (number1<number2))
	{
		cout << number3 << " < " << number1 << " < " << number2 << endl;
	}
	if((number3<number2) && (number2<number1))
	{
		cout << number3 << " < " << number2 << " < " << number1 << endl;
	}
	if((number3==number1) && (number1<number2))
	{
		cout << number3 << " = " << number1 << " < " << number2 << endl;
	}
	if((number3<number1) && (number1==number2))
	{
		cout << number3 << " < " << number1 << " = " << number2 << endl;
	}
	return 0;
}
