#include <iostream>
using namespace std;

int main() {
  // Declare input variables
  string month;
  int startDay, numDays;

  // Prompt user to input information about the month
  cout << "Enter the name of the month:                     ";
  cin >> month;
  cout << "Enter the day of the week the month begins:      ";
  cin >> startDay;
  cout << "Enter the number of days in the month:           ";
  cin >> numDays;

  // Prints the calendar header
  cout << "\n\t\t\t\t\t\t\t\t" << month << "\n" << endl;
  cout << "      Sun      Mon     Tues      Wed    Thurs      Fri      Sat" << endl;

  // Prints 1 space shorter to align text
  cout << "        ";
  // Loops to print space to get to the first day of the week
  for (int space = 1; space < startDay; space++) {
    cout << "         ";
  }

  // Loops the amount of days in the month
  for (int date = 1; date <= numDays; date++) {

    // Checks if the date is one digit and prints the amount of space accordingly 
    if (date < 9) {
      cout << date << "        ";
    } else {
      cout << date << "       ";
    }

    // Checks to see if it is the end of the week
    if (startDay == 7) {

      // Checks if the date is one digit and prints space accordingly for the next line
      if (date < 10) {
        cout << endl << "        ";
      } else {
        cout << endl << "       ";
      }  

      // Resets the day of the week
      startDay = 0;
    }

    // Increases the day of the week by 1
    startDay++;
  }

  return 0;
} 