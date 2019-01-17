#include <iostream>

using namespace std;

int main()
{
	// Variables
	int scorePlayer1;
	int scorePlayer2;
	int rice1;
	int rice2;
	int rollTimes;
	int i;
	int j;

	scorePlayer1=0;
	scorePlayer2=0;

	cout << "Input how many times to roll the dice = ";
	cin >> rollTimes;

	// Arrays
	int array_results[2][rollTimes]; // 2 is number of players.

	srand(time(NULL));
	for(i=0;i<rollTimes;i++)
	{
		array_results[0][i] = (rand()%6)+1;
		array_results[1][i] = (rand()%6)+1;
		if(array_results[0][i]>array_results[1][i])
		{
			scorePlayer1++;
		}
		if(array_results[0][i]<array_results[1][i])
		{
			scorePlayer2++;
		}
	}
	cout << "Player(1) results = ";
	for(i=0;i<rollTimes;i++)
	{
		cout << array_results[0][i] << " ";
	}
	cout << endl;
	cout << "Player(2) results = ";
	for(i=0;i<rollTimes;i++)
	{
		cout << array_results[1][i] << " ";
	}
	cout << endl;
	if(scorePlayer1>scorePlayer2)
	{
		cout << "Player(1) won! (Score = " << scorePlayer1 << "-" << scorePlayer2 << ")" << endl;
	}
	else if(scorePlayer1==scorePlayer2)
	{
		cout << "Deuce!" << endl;
	}
	else
	{
		cout << "Player(2) won! (Score = " << scorePlayer2 << "-" << scorePlayer1 << ")" << endl;
	}	
	return 0;
}