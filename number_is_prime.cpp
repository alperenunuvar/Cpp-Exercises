#include <iostream>

using namespace std;

bool isPrime(int num)
{
	// Variables
	int i;

	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	// Variables
	int number;

	cout << "Input an interger = ";
	cin >> number;
	if(isPrime(number)==true)
	{
		cout << number << " is prime." << endl;
	}
	else
	{
		cout << number << " is not prime." << endl;
	}
	return 0;
}