#include <iostream>
using namespace std;

int main() {
  // Q1
  // Initializing input variables
  double hours, courses;
  // Prompts user for hours and courses in major
  cout << "How many hours are you taking this semester? ";
  cin >> hours;
  cout << "How many courses are there in their Major? ";
  cin >> courses;

  // Analyzes course load
  if (hours >= 12 && courses >= 3) {
    cout << "Course load is acceptable." << endl;
} else if (hours >= 12 && courses < 3) {
    cout << "Check your requirements for your major." << endl;
} else if (hours < 12 && courses < 3) {
    cout << "Please see your advisor." << endl;
}
    
  // Q2
  // Initialize input variables
  double test1, test2, test3;
  // Prompts user for test scores
  cout << "\nEnter first test score: ";
  cin >> test1;
  cout << "Enter second test score: ";
  cin >> test2;
  cout << "Enter third test score: ";
  cin >> test3;

  // Calculates and displays average
  double average = (test1 + test2 + test3) / 3;
  cout << "Your average is " << average << "%" << endl;
  // Congratulates or encourages user based on grades
  if (average > 95) {
    cout << "Congratulations!" << endl;
  } else if (average < 85) {
    cout << "You can do better to succeed." << endl;
  }

  return 0;
  }