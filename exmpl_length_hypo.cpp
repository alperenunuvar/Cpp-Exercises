#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// Variables
	int line1;
	int line2;
	int line3;
	
	cout << "Enter length of first line = " << endl;
	cin >> line1;
	cout << "Enter length of second line = " << endl;
	cin >> line2;
	line3 = sqrt(line1*line1+line2*line2);
	cout << "Length of the hypotenus = " << line3 << endl;
	return 0;
}
