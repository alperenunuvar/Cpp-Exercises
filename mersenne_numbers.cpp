#include <iostream>

using namespace std;

int calculatePow(int x, int y)
{
	int num=1;
	for(int i=1;i<=y;i++)
	{
		num=num*x;
	}
	return num;
}

int mersenneNumbers(int num)
{
	cout << calculatePow(2,num)-1 << " ";
	if(num==20)
	{
		cout << endl;
		return 0;
	}
	return mersenneNumbers(num+1);	
}

int main()
{
	mersenneNumbers(1);
	return 0;
}