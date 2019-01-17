#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	int j;
	int row;
	int column;
	int temp;

	temp=0;

	cout << "Input row and column of matrix:" << endl;
	cout << "Row = ";
	cin >> row;
	cout << "Column = ";
	cin >> column;
	if((row>0)&&(column>0))
	{
		// Arrays
		int array_matrix[row][column];

		for(i=0;i<row;i++)
		{
			for(j=0;j<column;j++)
			{
				cout << i+1 << ". Row, " << j+1 << ". Column = ";
				cin >> array_matrix[i][j];
			}
		}
		cout << endl;
		cout << "= Your matrix =" << endl;
		for(i=0;i<row;i++)
		{
			for(j=0;j<column;j++)
			{
				cout << array_matrix[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		for(i=0;i<row;i++)
		{
			for(j=i+1;j<column;j++)
			{
				temp = array_matrix[j][i];
				array_matrix[j][i] = array_matrix[i][j];
				array_matrix[i][j] = temp;
			}
		}
		cout << "= Transpose Of Matrix =" << endl;
		for(i=0;i<row;i++)
		{
			for(j=0;j<column;j++)
			{
				cout << array_matrix[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	else
	{
		cout << "Number of row and column at least 1." << endl;
	}
	
	return 0;
}