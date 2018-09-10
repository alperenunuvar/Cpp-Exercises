#include <iostream>

using namespace std;

int main()
{
	// Variables
	int line1;
	int line2;
	int line3;
	
	cout << "Enter first length of line = " << endl;
	cin >> line1;
	cout << "Enter second length of line = " << endl;
	cin >> line2;
	cout << "Enter third length of line = " << endl;
	cin >> line3;
	if((line1*line1 + line2*line2 == line3*line3) || (line2*line2 + line3*line3 == line1*line1) || (line1*line1 + line3*line3 == line2*line2))
	{
		cout << "This triangle is right." << endl;
	}
	else
	{
		cout << "This triangle is not right." << endl;
		cout << "Line(1) = " << line1 << " Line(2) = " << line2 << " Line(3) = " << line3 << endl;
	}
	return 0;
}
