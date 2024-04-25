// Evan Zhao
// ICS3U1-1
// Rock, Paper, Scissors

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

  // Declares boolean loop variable
  bool draw = true;
  // Loops through the program until the game is not a draw
  while (draw) {

    // Uses cstdlib library to generate a random number
    srand((unsigned) time(NULL));
    // Stores a random number from 1 to 3 into variable
    int computerChoice = 1 + (rand() % 3);

    // Declares user input variable
    string userChoice;
    // Prompts user to input rock, paper, or scissors
    cout << "Choose rock, paper, or scissors: ";
    cin >> userChoice;
    
    // Prints the computer's choice
    if (computerChoice == 1) {
      cout << "Computer chose rock" << endl;
    } else if (computerChoice == 2) {
      cout << "Computer chose paper" << endl;
    } else {
      cout << "Computer chose scissors" << endl;
    }

    // Checks if the user won
    if (userChoice == "rock" && computerChoice == 3 || userChoice == "paper" && computerChoice == 1 || userChoice == "scissors" && computerChoice == 2) {
      // Prints victory message and ends the loop
      cout << "You win!" << endl;
      draw = false;
    } 
    // Checks if the user lost
    else if (userChoice == "rock" && computerChoice == 2 || userChoice == "paper" && computerChoice == 3 || userChoice == "scissors" && computerChoice == 1) {
      // Prints losing message and ends the loop
      cout << "You lose." << endl;
      draw = false;
    } 
    // Checks if the user tied
    else {
      // Prints tieing message and the loop continues
      cout << "It's a tie. Try Again.\n" << endl;
    }
  }
  return 0;
}