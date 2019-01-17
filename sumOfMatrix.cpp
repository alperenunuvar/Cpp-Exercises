#include <iostream>

using namespace std;

int main()
{
	// Variables
	int row;	
	int column;	
	int i;
	int j;

	cout << "= Matrix(1) + Matrix(2) =" << endl;
	cout << "Input number of row = ";
	cin >> row;
	cout << "Input number of column = ";
	cin >> column;

	// Array
	int array_matrix1[row][column];
	int array_matrix2[row][column];

	cout << "= Matrix(1) =" << endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout << i+1 << ". Row," << j+1 << ". Column = ";
			cin >> array_matrix1[i][j];
		}
	}
	cout << "= Matrix(1) =" << endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout << array_matrix1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "= Matrix(2) =" << endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout << i+1 << ". Row," << j+1 << ". Column = ";
			cin >> array_matrix2[i][j];
		}
	}
	cout << "= Matrix(2) =" << endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout << array_matrix2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "= Matrix(1)+Matrix(2) = " << endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			array_matrix1[i][j] += array_matrix2[i][j];
			cout << array_matrix1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}