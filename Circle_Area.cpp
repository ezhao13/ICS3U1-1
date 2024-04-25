// This program will output the circumference and area
// of the circle with a given radius.

// PLACE YOUR NAME HERE
// Evan Zhao

#include <iostream>
using namespace std;

// defines constant variables to calculate area and circumference
const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{

  // Lab 2.2
	double area;								// definition of area of circle   
	int circumference;				// definition of circumference 
	circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * RADIUS * RADIUS;							// computes area

	// Fill in the code for the cout statement that will output (with description)
	// the circumference
  cout << "The circumference of the circle is " << circumference << endl;
  
	// Fill in the code for the cout statement that will output (with description)
	// the area of the circle
  cout << "The area of the circle is " << area << endl;


  // Lab 2.3
  // definition of length and width of circle
  const int LENGTH = 8;
  const int WIDTH = 3;

  // definition of area and perimeter of rectangle
  double areaRectangle;
  double perimeterRectangle;
  // computes area and perimeter
  areaRectangle = LENGTH * WIDTH;
  perimeterRectangle = LENGTH * 2 + WIDTH * 2;

  // outputs area and perimeter of rectangle 
  cout << "\nThe area of the rectangle is " << areaRectangle << endl;
  cout << "The perimeter of the rectangle is " << perimeterRectangle << endl;

	return 0;
}  
// Lab 2.2 Excercise 3 results: 
  // The circumference of the circle is 33 
  // The area of the circle is 91.5624