#include <iostream>
#include <fstream>

using namespace std;

string reverseIt(string line) {
    char swap;  
    char *p;
    char *q;
    p=&line[0];
    q=&line[0];
    swap=line[0];
    
    while (*p!='\0')
    {
        p++;
    }    
    p--;    
    while (p>q)
	{
        swap = *p;
        *p = *q;
        *q = swap;
        p--;
        q++;
    }
    return line;
}

int main()
{
	// Strings
	string line;
	
	// Variables
	int counter;		

	ifstream file1;	
	ifstream file2;	
	
	cout << "File is opening..." << endl;
	file1.open("file1.txt");
	if(file1.is_open())
	{
		cout << "= Content of the file =\n----------" << endl;
		while(getline(file1, line))
		{
			cout << line << endl;	
		}
		cout << "----------" << endl;
		file2.open("file1.txt");
		cout << "= Reverse Content of the file =\n----------" << endl;
		while(getline(file2, line))
		{
			cout << reverseIt(line) << endl;	
		}
		cout << "----------" << endl;
		file1.close();
		file2.close();
	}
	else
	{
		cout << "File could not opened." << endl;
	}
	return 0;
}
