#include <iostream>

using namespace std;

int main()
{
	// Arrays
	int array_numbers[3] = {1,2,3};

	// Variables
	int *p;

	p=&array_numbers[0]; // p = array_numbers;
	cout << "1st element (address) = " << p << endl;
	cout << "2nd element (address) = " << p+1 << endl;
	cout << "3rd element (address) = " << p+2 << endl;
	cout << "1st element = " << p[0] << endl;
	return 0;
}