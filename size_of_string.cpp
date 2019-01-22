#include <iostream>
#include <string.h>

using namespace std;

// Prototypes
int calSize(char *string1);

int calSize(char *string1)
{
	// Variables
	int i;
	int counter;
	char str;

	str = string1[0];
	counter = 0;
	while(str!='\0')
	{
		str = string1[++counter];
	}
	return counter;
}

int main()
{
	// Strings
	char *string1 = "ab";

	cout << "Size of string = " << calSize(string1) << endl;
	cout << "Size of string (strlen) = " << strlen(string1) << endl;
	return 0;
}