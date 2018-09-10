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
	int counter;
	int limit;

	cout << "Input prime numbers limit = ";
	cin >> limit;
	counter=0;
	for(number=2;;number++)
	{
		if(isPrime(number)==true)
		{
			cout << counter+1 << ". " << number << " is prime." << endl;
			counter++;
		}
		if(counter==limit)
		{
			break;
		}
	}
	return 0;
}