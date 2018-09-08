#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	
	for(i=1;i<=100;i++)
	{
		if((i%3==0) || (i%7==0))
		{
			cout << i << " ";
		}
	}
	return 0;
}
