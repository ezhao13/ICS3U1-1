#include <iostream>
using namespace std;

// Defines a boolean function to check if a number is prime
bool isPrime(int num) {
  // Loops from 2 to the number-1
   for (int factor = 2; factor < num; factor++) {
     // Checks whether the number has a factor
     if (num % factor == 0) {
       // Returns false because it has a factor
       return false;
     }    
   }

  // Returns true if user inputs anything below 1
  if (num <= 1) {
    return false;
  }
  
  // Returns true if there were no factors 
  return true;
}

int main() {
  // Declares input variable
  int userInput;
  // Prompts user to enter a number to be checked
  cout << "Enter a number and I'll tell you whether it is prime: ";
  cin >> userInput;

  // Calls the function
  if (isPrime(userInput)) {
    // Prints the number is prime if the function returns true
    cout << userInput << " is prime." << endl;
  } else {
    // Prints the number is not prime if the function returns false
    cout << userInput << " is not prime" << endl;
  }
  
  return 0;
}