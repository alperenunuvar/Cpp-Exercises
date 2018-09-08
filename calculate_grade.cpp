#include <iostream>

using namespace std;

int main()
{
	// Variables
	int grade;
	
	cout << "Enter grade = " << endl;
	cin >> grade;
	if((grade>=0) && (grade<=100))
	{
		if(grade<50)
		{
			cout << "Your grade is F." << endl;
		}
		else if((grade>=50) && (grade<70))
		{
			cout << "Your grade is C." << endl;
		}
		else if((grade>=70) && (grade<90))
		{
			cout << "Your grade is B." << endl;
		}
		else
		{
			cout << "Your grade is A." << endl;
		}
	}
	else
	{
		cout << "Your grade must be between 0-100." << endl;	
	}	
	return 0;
}
