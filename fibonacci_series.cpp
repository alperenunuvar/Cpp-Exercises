#include <iostream>

using namespace std;

int main()
{
	// Variables
	int num1;
	int num2;
	int sum;
	int count;
	int i;
	
	cout << "Enter number of serie = ";
	cin >> count;
	num1=1;
	num2=1;
	i=2;
	if(count<=0)
	{
		cout << "Your number must be positive." << endl;	
	}	
	else if(count==1)
	{
		cout << num1 << "\t";
	}
	else if(count==2)
	{
		cout << num1 << "\t" << num2 << "\t";
	}
	else
	{
		cout << num1 << "\t" << num2 << "\t";
		while(i<count)
		{		
			sum=num1+num2;
			num1=num2;
			num2=sum;
			cout << sum << "\t";
			i++;
		}
	}		
	return 0;
}
