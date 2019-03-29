#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// Write File
	ofstream file1;
	
	file1.open("file1.txt");
	if(file1.is_open())
	{
		file1 << "This is a sample sentence." << endl;
		file1.close();
	}
	else
	{
		cout << "File could not created." << endl;
	}
	
	// Read File
	ifstream file2;
	
	// Strings
	string line;
	
	file2.open("file1.txt");
	
	if(file2.is_open())
	{
		while(getline(file2,line))
		{
			cout << line << endl;
		}
		file2.close();
	}
	else
	{
		cout << "Could not reached a file." << endl;
	}
	return 0;
}
