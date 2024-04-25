// Evan Zhao
// ICS3U1-1
// Theatre Seating Assignment
// December 14, 2023

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  // Defines array 
  string seating[15][30];
  double prices[15];

  // Uses random library
  srand((unsigned) time(NULL));
  // Loops through each row
  for (int row = 0; row < 15; row++) {
    // Prompts user to enter price for each row
    double rowPrice;
    cout << "Enter seat prices for row " << row+1 << ": ";
    cin >> rowPrice;
    prices[row] = rowPrice;

    // Loops through each column 
    for (int column = 0; column < 30; column++) {
      // Randomly assigns availibility for each seat
      if (rand() % 2 == 1) {
        seating[row][column] = "*";
      } else {
        seating[row][column] = "#";
      }
    }
  }

  // Prints out seating chart
  cout << "\nSeating Chart" << endl;
  cout << "Seats    123456789012345678901234567890" << endl;
  
  // Loops through each row
  for (int row = 0; row < 15; row++) {
    cout << "Row " << row+1 << ":   ";
    
    // Loops through each column 
    for (int column = 0; column < 30; column++) {
      // Prints out seat availability
      cout << seating[row][column];
    }
    cout << endl;
  }

  // Defines variable for total price
  double totalPrice = 0;

  // Loops until user does not want to buy more tickets
  while (true) {
    // Prompts user to enter the row and column of the ticket they want
    cout << "\nTicket purchase" << endl;
    int ticketRow, ticketColumn;
    cout << "Enter the row of ticket: ";
    cin >> ticketRow;
    cout << "Enter the seat number: ";
    cin >> ticketColumn;

    // Validates the input 
    if (ticketRow < 1 || ticketRow > 15 || ticketColumn < 1 || ticketColumn > 30) {
      cout << "Invalid ticket" << endl;
    
    // Validates the availability of the seat 
    } else if (seating[ticketRow-1][ticketColumn-1] == "*") {
      cout << "Sorry, that seat is already taken" << endl;
      
    } else {
      // Adds the ticket price to total price
      totalPrice += prices[ticketRow-1];
      // Changes the seat availability to taken
      seating[ticketRow-1][ticketColumn-1] = "*";

      // Prompts the user if they want to buy another ticket
      char again;
      cout << "Would you like to buy another ticket? (y/n): ";
      cin >> again;
      // Breaks out of loop if user does not want to buy another ticket
      if (again == 'n') {
        break;
      // Continues loop if user wants to buy another ticket
      } else if (again == 'y') {
        continue;
      } 
    } 
  }

  // Prints out updated seating chart
  cout << "\nUpdated seating chart" << endl;
  cout << "Seats    123456789012345678901234567890" << endl;
  // Loops through each row
  for (int row = 0; row < 15; row++) {
    cout << "Row " << row+1 << ":   ";

    // Loops through each column
    for (int column = 0; column < 30; column++) {
      // Prints out seat availability
      cout << seating[row][column];
    }
    cout << endl;
  }

  // Defines variable to count total tickets sold
  int totalSold = 0;

  // Prints availability of seats
  cout << "\nSeats summary" << endl;
  // Loops through each row
  for (int row = 0; row < 15; row++) {
    // Defines variable to count tickets sold in each row
    int rowSold = 0;
    
    // Loops through each column
    for (int column = 0; column < 30; column++) {
      // Counts the number of sold tickets in each row
      if (seating[row][column] == "*") {
        rowSold++;
      }
    }
    
    // Prints seats sold and available in each row
    cout << "Row " << row+1 << ": " << rowSold << " seats sold and " << 30-rowSold << " seats available" << endl;
    // Adds rows sold to total sold
    totalSold += rowSold;
  }
  
  // Prints total seats sold
  cout << "There are " << totalSold << " seats sold and " << 15*30-totalSold << " seats available" << endl;
  // Prints total ticket price
  cout << "\nThe total ticket sales is $" << totalPrice << endl;
  
  return 0;
}