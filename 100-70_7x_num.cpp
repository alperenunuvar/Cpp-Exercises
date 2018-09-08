#include <iostream>

using namespace std;

int main()
{
	// Variables
	int i;
	
	for(i=100;i>=70;i--)
	{
		if(i%7==0)
		{
			cout << i << " ";
		}
	}
	return 0;
}
