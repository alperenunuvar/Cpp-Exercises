#include <iostream>

using namespace std;

int main()
{
	// Variables
	char let;
	int let_num;
	char temp_let;
	int line;
	int i;
	int j;

	cout << "Enter letter = ";
	cin >> let;
	let_num = let;
	//(A-Z)
	if((let_num>=65)&&(let_num<=90))
	{		
		line = (let_num%60)-4;
		for(i=1;i<=line;i++)
		{
			temp_let = 'A'-1;
			for(j=0;j<(2*i)-1;j++)
			{				
				if (i>j)
				{
					temp_let++;
				}
				if (j>=i)
				{
					temp_let--;
				}
				cout << temp_let;									
			}			
			cout << endl;
		}		
	}
	//(a-z)
	else if((let_num>=97)&&(let_num<=122))
	{
		line = (let_num%90)-6;
		for(i=1;i<=line;i++)
		{
			temp_let = 'a'-1;
			for(j=0;j<(2*i)-1;j++)
			{				
				if (i>j)
				{
					temp_let++;
				}
				if (j>=i)
				{
					temp_let--;
				}
				cout << temp_let;									
			}			
			cout << endl;
		}
	}
	//any characters
	else
	{
		cout << "You can only enter these characters (A-Z)(a-z)." << endl;
	}
	return 0;
}

/*
n = E -69 --------> satır = (n%60)-4
(2*satır)-1
A 			1	65
ABA 		3	65-66-65
ABCBA 		5	65-66-67-66-65
ABCDCBA 	7	65-66-67-68-67-66-65
ABCDEDCBA 	9	65-66-67-68-69-68-67-66-65
*/