#include <iostream>

using namespace std;

int main()
{
	// Variables
	int distance;
	int velocity;
	float time;
	int time2;
	float minute;
	
	cout << "Enter distance (km)= " << endl;
	cin >> distance;
	cout << "Enter velocity (km/h)= " << endl;
	cin >> velocity;	
	time = (float)distance/velocity;
	time2 = distance/velocity;	
	minute = (float)time-time2;
	minute *= 60;
	cout << "Destination time (h)= " << time2 << " hours " << minute << " minutes." << endl;
	return 0;
}
