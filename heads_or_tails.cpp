#include <iostream>

using namespace std;

int main()
{
	// Variables
	int hot;

	srand(time(NULL));
	hot=rand()%2;
	if(hot==0)
	{
		cout << "Heads" << endl;
	}
	else
	{
		cout << "Tails" << endl;
	}
	return 0;
}