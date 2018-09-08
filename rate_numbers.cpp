#include <iostream>

using namespace std;

int main()
{
	// Variables
	int negativeNumber;
	int positiveNumber;
	int zeroNumber;
	float totalNumber;
	int number;
	int i;
	int j;
	
	cout << "Enter number of integers = ";
	cin >> i;
	j=1;
	totalNumber=0;
	zeroNumber=0;
	positiveNumber=0;
	negativeNumber=0;
	while(j<=i)
	{
		cout << "Enter " << j << ". number = ";
		cin >> number;
		totalNumber++;
		if(number<0)
		{
			negativeNumber++;
		}
		else if(number==0)
		{
			zeroNumber++;
		}
		else
		{
			positiveNumber++;
		}
		j++;
	}		
	cout << "\nPositives = %" << (positiveNumber/totalNumber)*100 << "\nNegatives = %" << (negativeNumber/totalNumber)*100 << "\nZeros = %" << (zeroNumber/totalNumber)*100 << endl;
	return 0;
}
