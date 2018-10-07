#include <iostream>

using namespace std;

bool isPrime(int number)
{
	// Variables
	int i;

	if(number<2)
	{
		return false;
	}
	for(i=2;i<number;i++)
	{
		if(number%i==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	// Variables
	int limit;
	int number;
	int counter;

	cout << "Which place do you get = ";
	cin >> limit;
	if(limit>0)
	{
		// Array
		int array_primeNumbers[limit];
		counter=0;
		number=2;
		cout << "First " << limit << " Prime Numbers = ";
		while(1)
		{
			if(isPrime(number)==true)
			{
				cout << number << " ";
				array_primeNumbers[counter]=number;
				counter++;			
			}		
			if(counter==limit)
			{
				break;
			}
			number++;	
		}
		cout << endl;
		cout << "Last number = " << array_primeNumbers[limit-1] << endl;
	}
	else
	{
		cout << "The number must be positive." << endl;
	}	
	return 0;
}