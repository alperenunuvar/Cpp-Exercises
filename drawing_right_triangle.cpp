#include <iostream>

using namespace std;

int main()
{
	// Variable
	int i;
	int j;
	int dim;

	cout << "Enter a dimension = ";
	cin >> dim;
	for(i=0;i<=dim;i++)
	{
		for(j=0;j<i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
