#include <iostream>

using namespace std;

int calculateFactorial(int num)
{
	int totalFactorial;
	totalFactorial=1;
	while(num>=1)
	{
		totalFactorial*=num;
		num--;
	}
	return totalFactorial;
}

int calculateCombination(int num1, int num2)
{
	return (calculateFactorial(num1)) / ((calculateFactorial(num2))*(calculateFactorial(num1-num2)));
}

int main()
{
	// Variables
	int num1;
	int num2;
	int total;
	total = 0;

	cout << "Enter first number = ";
	cin >> num1;
	cout << "Enter second number = ";
	cin >> num2;
	total = calculateCombination(num1, num2);
	cout << total << endl;
	//cout << "- Function -\n1st number = " << num1 << "\n2nd number = " << num2 << "\n"<< total << " = " << num1 << "! / " << num2 << "! x " << "(" << num1 << "-" << num2 << ")!" << endl;
	return 0;
}