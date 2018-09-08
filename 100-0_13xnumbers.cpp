#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	
	for(i=100;i>=0;i--)
	{
		if(i%13==0)
		{
			cout << i << " ";
		}
	}
	return 0;
}
