// Evan Zhao
// ICS3U1-1
// If-else End of unit Option 3

#include <iostream>
using namespace std;

int main() {

  // Defines input variables 
  string inOut, roomBoard;

  // Prompts user to input if they are an in-state or out-of-state student and if they need a room and board
  cout << "Please input \"I\"  if you are in-state or \"O\" if you are out-of-state: ";
  cin >> inOut;
  cout << "Please input \"Y\" if you require room and board and \"N\" if you do not: ";
  cin >> roomBoard;

  // Defines variable for the total bill for the semester
  int totalBill = 0;

  // Checks if they are an in-state student and adds $3000 if they are
  if (inOut == "I") {
    totalBill += 3000;
    
    // Nested if statement, checks if they require a room and board and adds $2500 if they do
    if (roomBoard == "Y") {
      totalBill += 2500;
    }

  // Checks if they are an out-of-state student and adds $4500 if they are
  } else {
    totalBill += 4500;

    // Nested if statement, checks if they require a room and board and adds $3500 if they do
    if (roomBoard == "Y") {
      totalBill += 3500;
    }
    
  }

  // Prints total bill
  cout << "Your total bill for this semester is $" << totalBill << endl;

  return 0;
}