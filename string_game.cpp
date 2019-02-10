#include <iostream>

using namespace std;

// Prototypes
char *matcher(char *string1);

char *matcher(char *string1)
{
	// Variables
	int i;
	char c;
	char c1;
	bool check;

	check=false;
	i=0;
	c=string1[i];
	if(c=='\0')
	{
		return string1;
	}
	
	while(c!='\0')
	{
		c1=string1[i+1];
		if((c==c1)&&(i==0))
		{
			string1=&string1[i+2];
			check=true;			
		}
		else if(c==c1)
		{
			check=true;
			while(string1[i]!='\0')
			{
				string1[i]=string1[i+2];
				i++;
			}
			string1[i]='\0';			
		}
		i++;
		c=string1[i];
	}
	if(check==false)
	{
		return string1;
	}
	else
	{
		return matcher(string1);
	}	
}

int main()
{
	// Strings
	char word[100];
	
	cout << "Input a word = ";
	cin >> word;
	cout << matcher(word) << endl;
	return 0;
}