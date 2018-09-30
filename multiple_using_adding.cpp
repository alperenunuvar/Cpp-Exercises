#include <iostream>

using namespace std;

//recursion
int multiplication_r(int num, int i)
{
	if(i==0)
	{
		return 0;
	}
	if(i>=0)
	{		
		return num+multiplication_r(num,i-1);
	}
	else
	{
		i*=-1;		
		return (num+multiplication_r(num,i-1))*-1;
	}	
}

//iterative
int multiplication(int num, int i)
{
	// Variables
	int a;
	int sum;

	sum=0;
	if(i>=0)
	{		
		for(a=0;a<i;a++)
		{
			sum+=num;
		}
	}
	else
	{
		i=i*-1;
		for(a=0;a<i;a++)
		{
			sum+=num;
		}
		sum*=-1;
	}
	return sum;
}

int main()
{
	// Variables
	int number1;
	int number2;

	cout << "Enter first integer to multiplication = ";
	cin >> number1;
	cout << "Enter second integer to multiplication = ";
	cin >> number2;
	//iterative
	cout << "Iterative\n" << number1 << " x " << number2 << " = " << multiplication(number1, number2) << endl;
	//recursion
	cout << "\nRecursion\n" << number1 << " x " << number2 << " = " << multiplication_r(number1, number2) << endl;
	return 0;
}
