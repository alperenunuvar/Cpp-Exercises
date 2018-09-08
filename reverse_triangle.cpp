#include <iostream>

using namespace std;

int main()
{
	// Variables
	int line;
	int i;
	int j;
	int k;

	cout << "Enter number of line to draw reverse triangle = ";
	cin >> line;
	for(i=0;i<line;i++)
	{
		for(k=0;k<i;k++)
		{
			cout << " ";
		}
		for(j=0;j<line-i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}