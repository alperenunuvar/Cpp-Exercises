#include <iostream>

using namespace std;

int main()
{
	// Variables
	int dim;
	int l;
	int c;

	cout << "Enter dimension of matrix = ";
	cin >> dim;
	for(l=0;l<dim;l++)
	{
		for(c=0;c<dim-l-1;c++)
		{
			cout << "0";
		}			
		for(c=0;c<1;c++)
		{
			cout << "1";
		}		
		for(c=0;c<l;c++)
		{
			cout << "0";
		}
		cout << endl;
	}	
	return 0;
}