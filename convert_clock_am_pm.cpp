#include <iostream>

using namespace std;

// Prototypes
bool test(char *string);
char convert24Hours(char *string);

char convert24Hours(char *string)
{
	int hours;

	if(string[8]==80)
	{
		hours = (string[0]-48)*10;
		hours += (string[1]-48);		
		hours += 12;
		string[0] = (char)(48+(hours/10));
		string[1] = (char)(48+(hours%10));							
	}
	string[8] = '\0';
}

bool test(char *string)
{
	// Variables
	char c;
	
	c = string[0];
	while(c!='\0')
	{
		if(((string[2]==58)&&(string[5]==58))&&(((string[8]==65)||(string[8]==80))&&(string[9]==77))) // checks ':' and AM or PM
		{
			if((c>47)&&(c<58))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	// Strings
	char time1[11];
	
	cout << "Input 12-hour clok type (hh:mm:ssAM) or (hh:mm:ssPM) = ";
	cin >> time1;
	if(test(time1))
	{
		convert24Hours(time1);
		cout << "24-hour type = " << time1 << endl;
	}
	else
	{
		cout << "Please only input these formats (hh:mm:ssAM) or (hh:mm:ssPM)." << endl;
	}
	return 0;
}