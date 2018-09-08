#include <iostream>

using namespace std;

int main()
{
	// Variables
	int day;
	int numOfWorker;
	int total;
	
	cout << "Enter number of day = " << endl;
	cin >> day;
	cout << "Enter number of worker = " << endl;
	cin >> numOfWorker;
	total = day / numOfWorker;
	cout << "Time of work = " << total << endl;
	return 0;
}
