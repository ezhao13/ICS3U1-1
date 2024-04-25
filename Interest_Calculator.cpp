#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Set the precision of the code to 6 significant figures, uses iomanip library
  cout << setprecision(6) << endl;
  
  // Declaring input variables 
  int startingYear;
  int endingYear;
  double moneyInAccount;
  double interestRate;
  
  // Prompts user to enter information to calculate interest
  cout << "Enter the starting balance:       ";
  cin >> moneyInAccount;
  cout << "Enter the starting year:          ";
  cin >> startingYear;
  cout << "Enter the ending year:            ";
  cin >> endingYear;
  cout << "Enter the interest rate:          ";
  cin >> interestRate;
  
  // Prints the balance header 
  cout << "\nOPENING BALANCE:                 $" << moneyInAccount << endl;
  cout << "-------------------------------------" << endl;

  // Loops through the years and calculates the interest
  for (int year = startingYear; startingYear <= endingYear; year++) {
    
    // Calculates the interest by using input variables
    moneyInAccount = moneyInAccount * (1 + interestRate / 100);
    
    // Prints and formats the year and balance
    cout << year << ":                         $" << moneyInAccount << endl;

    // Increases the starting year by 1
    startingYear++;
  }

  return 0;
}