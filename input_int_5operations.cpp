#include <iostream>

using namespace std;

int main()
{
	// Variables
	int number1;
	int number2;
	
	cout << "Input first integer =" << endl;
	cin >> number1;
	cout << "Your fist integer is = " << number1 << endl;
	cout << "Input second integer =" << endl;
	cin >> number2;
	cout << "Your second integer is = " << number2 << endl;
	cout << "(" << number1 << ") + (" << number2 << ") = " << number1+number2 << endl;
	cout << "(" << number1 << ") - (" << number2 << ") = " << number1-number2 << endl;
	cout << "(" << number1 << ") x (" << number2 << ") = " << number1*number2 << endl;
	cout << "(" << number1 << ") / (" << number2 << ") = " << number1/number2 << endl;
	cout << "(" << number1 << ") % (" << number2 << ") = " << number1%number2 << endl;
	return 0;
}
