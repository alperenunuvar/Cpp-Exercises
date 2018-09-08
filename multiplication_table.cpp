#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	int j;
	int a;

	cout << "Enter number of line = ";
	cin >> a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			cout << i << "x" << j << " = " << i*j << " ";
		}
		cout << endl;
	}
	return 0;
}