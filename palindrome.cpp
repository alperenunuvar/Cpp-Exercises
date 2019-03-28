#include <iostream>

using namespace std;

#define WORD_SIZE 16

// Prototypes
int calculateLength(char *w);
bool checkPalindrome(char *w, int wL);

int calculateLength(char *w)
{
	// Variables		
	int counter;
	int i;
	
	counter = 0;
	for(i=0;w[i]!='\0';i++)
	{		
		counter++;
	}
	return counter;	
}

bool checkPalindrome(char *w, int wL)
{
	// Variables
	int halfIndex;
	int i;
	int counter;
	
	halfIndex=0;
	counter=0;
	halfIndex = wL/2;
	
	for(i=0;i<halfIndex;i++)
	{
		if(w[i]==w[(wL-1)-i])
		{
			counter++;
		}
	}
	if(wL/2==counter)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	// Strings
	char word1[WORD_SIZE];
	
	// Variables	
	int wordLength;	
	
	wordLength=0;	
	cout << "Input a word to check palindrome = ";
	cin >> word1;
	wordLength = calculateLength(word1);
	if(checkPalindrome(word1, wordLength))
	{
		cout << "This word is palindrome." << endl;
	}
	else
	{
		cout << "This word is not palindrome." << endl;
	}
	return 0;
}
