#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	int numbers;
	int sum;
	int avg;	
	
	sum=0;
	for(i=0;numbers!=-1;i++)
	{
		cout << "Enter " << i+1 << ". number = ";
		cin >> numbers;
		sum = sum + numbers;		
	}
	sum=sum+1;
	i=i-1;
	avg = sum / i;
	cout << "Numbers = " << i << "\nSum = " << sum << "\nAverage = " << avg << endl;
	return 0;
}
