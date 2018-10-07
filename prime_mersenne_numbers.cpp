#include <iostream>

using namespace std;

int calculatePow(int num, int exponent)
{
	// Variables
	int i;
	int total;

	total=1;
	for(i=0;i<exponent;i++)
	{
		total*=num;
	}
	return total;
}

int calculateMersenneNumber(int number)
{	
	return calculatePow(2,number)-1;
}

bool isPrime(int num)
{
	// Variables
	int i;

	if(num<2)
	{
		return false;
	}
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
	int arraySize;
	int i;
	int j;
	int a;

	cout << "Input an array size = ";
	cin >> arraySize;
	if(arraySize>0)
	{
		// Arrays
		int mersennePrimeNumbers[arraySize];
		int mersenneNumbers[arraySize];

		j=0;
		for(i=1;i<=arraySize;i++)
		{
			mersenneNumbers[j] = calculateMersenneNumber(i);
			j++;	
		}
		cout << endl;
		cout << "First " << arraySize << " Mersenne Numbers : ";
		for(i=0;i<arraySize;i++)
		{
			cout << mersenneNumbers[i] << " ";
		}
		cout << endl;	
		a=0;
		for(i=0;i<arraySize;i++)
		{
			if(isPrime(mersenneNumbers[i])==true)
			{			
				mersennePrimeNumbers[a]=mersenneNumbers[i];
				a++;			
			}
		}
		cout << "\nMersenne Prime Numbers = ";
		for(i=0;i<a;i++)
		{
			cout << mersennePrimeNumbers[i] << " ";
		}
		cout << endl;
	}		
	else
	{
		cout << "Array size must be positive integer." << endl;
	}
	return 0;
}
