#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// Variables
	int line1;
	int line2;
	int line3;
	float area;
	int circum;
	
	cout << "Enter length of first line = " << endl;
	cin >> line1;
	cout << "Enter length of second line = " << endl;
	cin >> line2;
	line3 = sqrt(line1*line1+line2*line2);
	circum = line1 + line2 + line3;
	area = (float)((line1*line2)/2);
	cout << "Hypotenus = " << line3 << endl;
	cout << "Area of triangle = " << area << endl;
	cout << "Circumference of triangle = " << circum << endl;
	return 0;
}
