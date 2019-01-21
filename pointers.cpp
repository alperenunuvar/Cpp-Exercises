#include <iostream>

using namespace std;

int main()
{
	// Variables
	int a;
	int *p;

	a=10;
	p=&a;

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	cout << "a (p)(address) = " << p << endl;
	cout << "a (&a) (address) = " << &a << endl;
	return 0;
}