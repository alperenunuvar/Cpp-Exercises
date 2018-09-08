#include <iostream>

using namespace std;

int main()
{
	// Variables	
	int a;
	int b;
	int c;
	int d;	
	
	a=15;
	b=5;
	c=100;
	d=2;
	while(a<=100)
	{
		cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
		a+=15;
		b+=5;
		c-=10;
		d*=2;		
	}
	return 0;
}
