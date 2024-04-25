// This program demonstrates the use of characters and strings

// PLACE YOUR NAME HERE
// Evan Zhao

#include <iostream>
#include <string>
using namespace std;

// Definition of constants
const string FAVORITESODA = "Dr. Dolittle";	// use double quotes for strings 
const char BESTRATING = 'A';				        // use single quotes for characters

int main()
{
  // Lab 2.4
	char rating;			    // 2nd highest product rating
	string favoriteSnack;	// most preferred snack
	int numberOfPeople;		// the number of people in the survey
	int topChoiceTotal;		// the number of people who prefer the top choice

	// Fill in the code to do the following:
	// Assign the value of "crackers" to favoriteSnack
  favoriteSnack = "crackers";
  
	// Assign a grade of 'B' to rating
  rating = 'B';
  
	// Assign the number 250 to the numberOfPeople
  numberOfPeople = 250;
  
	// Assign the number 148 to the topChoiceTotal
  topChoiceTotal = 148;
  
	// Outputs a statement using the variables
	cout << "The preferred soda is " << FAVORITESODA << endl; 
	cout << "The preferred snack is " << favoriteSnack << endl; 
	cout << "Out of " << numberOfPeople << " people "
		 << topChoiceTotal << " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING;
	cout << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating
		 << endl;

	return 0;
} 
// Lab 2.4 Excercise 3:
  // No, because FAVORITESODA is declared as a constant. Constants cannot be changed elsewhere in the program after it is defined
// Lab 2.4 Excercise 4:
  // Yes, because favoriteSnack is not declared as a constant, and is able to be reassigned.