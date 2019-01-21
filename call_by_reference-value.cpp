#include <iostream>

using namespace std;

int cbv(int x) // call by value
{
	x = 10;
	return x;
}

int cbr(int *x, int *y, int *z) // call by reference
{
	*x = 100;
	*y = 200;
	*z = 300;
}

int main()
{
	// Variables
	int a;
	int b;
	int c;
	int *p;
	int *q;
	int *r;

	p=&a;
	q=&b;
	r=&c;
	
	cout << "= Call by value = " << endl;
	cout << cbv(a) << endl;
	cout << "= Call by reference = " << endl;
	cbr(p,q,r);
	cout << a << ", " << b << ", " << c << endl;
	return 0;
}