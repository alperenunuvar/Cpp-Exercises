#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.14

// Prototypes
double circle_area(double radius);
double calc_hypotenuse(int side1, int side2);
double calc_radius_of_smallest_circle(int side1, int side2);
double calc_radius_of_largest_circle(int side1, int side2);
double calc_area_of_smallest_circle(int side1, int side2);
double calc_area_of_largest_circle(int side1, int side2);
double calc_area_of_smallest_square(int side1, int side2);
double calc_area_of_largest_square(int side1, int side2);
double calc_area_of_square(int side);
void display_results(
	double largest_circle,	
	double largest_square, 
	double smallest_circle, 
	double smallest_square
);

double circle_area(double radius)
{	
	return (PI * (pow(radius, 2)));
}

double calc_hypotenuse(int side1, int side2)
{	   
	return sqrt((pow(((double)side1/2), 2))+(pow(((double)side2/2), 2)));
}

double calc_radius_of_smallest_circle(int side1, int side2)
{
	return calc_hypotenuse(side1, side2);
}

double calc_radius_of_largest_circle(int side1, int side2)
{
	if(side1>side2)
	{
		return (double)side2/2;
	}
	else if(side2>side1)
	{
		return (double)side1/2;
	}
	else
	{
		return (double)side1/2;
	}
}

double calc_area_of_smallest_circle(int side1, int side2)
{
	return circle_area(calc_radius_of_smallest_circle(side1, side2));
}

double calc_area_of_largest_circle(int side1, int side2)
{
	return circle_area(calc_radius_of_largest_circle(side1, side2));
}

double calc_area_of_smallest_square(int side1, int side2)
{
	if(side1>=side2)
	{
		return calc_area_of_square(side2);
	}
	else
	{
		return calc_area_of_square(side1);
	}
}

double calc_area_of_largest_square(int side1, int side2)
{
	if(side1>=side2)
	{
		return calc_area_of_square(side1);
	}
	else
	{
		return calc_area_of_square(side2);
	}
}

double calc_area_of_square(int side)
{
	return pow(side, 2);
}

void display_results(double largest_circle,	double largest_square, double smallest_circle, double smallest_square)
{
	cout << "The area of the largest circle that fits inside a rectangle:\t\t" << largest_circle << endl;
	cout << "The area of the largest square that fits inside a rectangle:\t\t" << largest_square << endl;
	cout << "The area of the smallest circle that surrounds the same rectangle:\t" << smallest_circle << endl;
	cout << "The area of the smallest square that surrounds the same rectangle:\t" << smallest_square << endl;
}

int main()
{
	// Variables
	double side1;
	double side2;
	
	side1=0;
	side2=0;
	cout << "Enter first side for rectangle:";
	cin >> side1;
	cout << "Enter second side for rectangle:";
	cin >> side2;
	display_results(
		calc_area_of_largest_circle(side1, side2),		
		calc_area_of_smallest_square(side1, side2),
		calc_area_of_smallest_circle(side1, side2),
		calc_area_of_largest_square(side1, side2)	
	);
	return 0;
}
