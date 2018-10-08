#include <iostream>

using namespace std;

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
	int number1;
	int number2;
	int arraySize;
	int firstNumber1;
	int i;

	// Arrays	
	int array_primeFactorizations1[1024];

	i=0;
	number2=2;
	cout << "Input an integer of GCD (x,y) = ";
	cin >> number1;					
	firstNumber1=number1;
	//factorizating	
	while(1)
	{
		if((isPrime(number2)==true)&&(number1%number2==0))
		{
			number1=number1/number2;
			array_primeFactorizations1[i]=number2;
			i++;
		}
		else
		{
			number2++;
		}
		if(number1==1)
		{
			break;
		}	
	}
	cout << "Factorizations of " << firstNumber1 << " are = ";
	arraySize=i;
	for(i=0;i<arraySize;i++)
	{
		cout << array_primeFactorizations1[i] << " ";
	}	
	cout << endl;
	return 0;
}