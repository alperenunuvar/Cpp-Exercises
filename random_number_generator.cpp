#include <iostream>

using namespace std;

int main()
{
	// Variables
	int random;

	srand(time(NULL));
	random = rand()%21; //21-> Numbers between 0-20
	cout << random << endl;
	return 0;
}