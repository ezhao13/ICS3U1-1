// PLACE YOUR NAME HERE
// Evan Zhao

#include <iostream> 
using namespace std;

int main() {
  // This program tests whether or not an initialized value
  // is equal to a value input by the user
  // Lab 1
  int num1;        // num1 is not initialized
  int num2;        // num2 has been initialized to 5
  
  cout << "Please enter an integer: "; cin >> num1;
  cout << "Please enter a second integer: "; cin >> num2;
  
  cout << "num1 = " << num1 << " and num2 = " << num2 << endl; 
  if (num1 == num2) {
  cout << "The values are the same. Hey that’s a coincidence!" << endl;
  } 
  else {
    cout << "The values are not the same \n" << endl;
  }

  // This program prints "You Pass" if a student's average is
  // 60 or higher and prints "You Fail" otherwise
  // Lab 2
  float average;    // holds the grade average cout << "Input your average:" << endl;

  cout << "\nEnter your average: ";
  cin >> average;

  if (average > 100) {
    cout << "Invalid data" << endl;
  } else if (average >= 90) {
    cout << "A" << endl;
  } else if (average >= 80) {
    cout << "B" << endl;
  } else if (average >= 60) {
    cout << "You Pass" << endl;
  } else {
    cout << "You Fail" << endl;
  }

  return 0;

}
/* Lab 1
Excercise 1: 'num2' is not initialized correctly. The if statement has one '=' instead of two. It also has no '{}'. 
*/
/* Lab 2
Excercise 1: The program does not output anything when inputting 60.
*/