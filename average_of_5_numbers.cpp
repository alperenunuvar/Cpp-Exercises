#include <iostream>

using namespace std;

int main()
{
	// Variables
	int numbers;
	int total;
	int counter;
	
	counter=0;
	while(counter<5)
	{
		cout << "Enter " << counter+1 << ". number = " << endl;
		cin >> numbers;
		total += numbers;
		counter++;
	}
	total /= 5;
	cout << "Average of the numbers = " << total << endl;	
	return 0;
}
