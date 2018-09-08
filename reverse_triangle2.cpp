#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	int j;
	int dim;

	cout << "Enter dimension = ";
	cin >> dim;
	for(i=0;i<=dim;i++)
	{
		for(j=0;j<dim-i;j++)
		{
			cout << " ";
		}
		for(j=0;j<i;j++)
		{
			cout << "*";
		}		
		cout << endl;
	}
	return 0;
}