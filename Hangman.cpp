// Evan Zhao
// ICS3U1-1
// Hangman Summative
// January 12, 2024
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main() {

  // Defines 2D array with topic and words that have corresponding index
  string topicWord[2][10] = {
  {"FRUIT", "FRUIT", "ELECTRONIC", "ELECTRONIC", "ANIMAL", "ANIMAL", "SUBJECT", "SUBJECT", "FOOD", "GAME"},
  {"RASPBERRY", "BANANA", "TABLET", "AIRPODS", "GUINEA PIG", "MONKEY", "CHEMISTRY", "COMPUTER SCIENCE", "CHEESE PIZZA", "SUPER MARIO BROS"}
};

  // Header
  cout << "                            WELCOME TO HANGMAN!\n" << endl;

  // Loops if the user wants to play again
  char playAgain = 'Y';
  while (playAgain == 'Y') {
    // Generates a random number from 0-9
    srand(time(0));
    int randomIndex = rand() % 10;

    // Defines variables to store the topic and word, uses the random number as the index
    string randomTopic = topicWord[0][randomIndex];
    string randomWord = topicWord[1][randomIndex];
    
    // Defines string variable to encode the original word with '-'
    string secretWord = "";
    // Loops through the length of the word
    for (int index = 0; index < randomWord.length(); index++) {
      // Turns letters into '-', spaces remain the same
      if (randomWord[index] == ' ') {
        secretWord += " ";
      } else {
        secretWord += "-";
      }
    }

    // Defines variables to store the remaining letters, used letters, and the number of guesses
    string remaining = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string used = "";
    int guesses = 6;
    // Defines input variable
    char letterGuess;
    string finalGuess;

    // Loops until the game has ended
    bool gameFinish = false;
    while (gameFinish == false) { 
      // Displays the current state of the game
      cout << "=================================================================================" << endl;
      cout << "Topic:                                       " << randomTopic << endl;
      cout << "Secret Word:                                 " << secretWord << endl;
    
      cout << "\nLetters Remaining:                           " << remaining << endl;
      cout << "Letters Used:                                " << used << endl;
      cout << "Guesses Remaining:                           " << guesses << endl;
      cout << "=================================================================================" << endl;
      
      
      // Input validates the letter guess
      while (true) {
        // Prompts user for a letter guess or '!'
        cout << "Enter a letter (! to guess entire word):     ";
        cin >> letterGuess;

        // Breaks out of the loop if input is a letter or '!'
        if (letterGuess == '!' || isalpha(letterGuess)) {
          break;
        } else {
          cout << "Invalid input" << endl;
        }
      }

      // Converts the input to uppercase to avoid errors
      letterGuess = toupper(letterGuess);
        
      // If the user enters '!' and wants to guess the entire word
      if (letterGuess == '!') {

        // Input validates the final guess
        while (true) {
          // Prompts user for the entire word guess
          cout << "Enter the secret word:                       ";
          // Uses getline to accomadate for multiple words
          cin.ignore();
          getline(cin, finalGuess);
          
          bool valid = true;
          // Loops through the length of the user's input
          for (int index = 0; index < finalGuess.length(); index++) {
            // If any character is not a letter, the guess is invalid
            if (isalpha(finalGuess[index]) == 0 && finalGuess[index] != ' ') {
              cout << "Invalid input" << endl;
              valid = false;
              break;
            }
          }
          // Breaks out the loop if input is valid
          if (valid) {
            break;
          }
        }

        // Loops through user's input, converting each character to uppercase to avoid errors
        for (int index = 0; index < finalGuess.length(); index++) {
          finalGuess[index] = toupper(finalGuess[index]);
        }

        // Displays appropriate message whether user guessed correctly or not
        if (finalGuess == randomWord) {
          cout << "Congratulations..." << finalGuess << " is correct!" << endl;
        } else {
          cout << finalGuess << " is incorrect! The correct answer was " << randomWord << "!" << endl;
        }

      // Sets gameFinish to true to end the current game
      gameFinish = true;

      // If the user enters a letter
      } else {   
        // Checks if the letter has been used
        bool repeat = false;
        // Loops through used letters
        for (int index = 0; index < used.length(); index++) {
          if (used[index] == letterGuess) {
            repeat = true;
          }
        }

        // Displays appropriate message if the letter has been used
        if (repeat) {
          cout << letterGuess << " has already been used!" << endl;

        // If the letter has not been used, the rest of the program runs
        } else {
          
          // Checks if the letter is in the word
          bool found = false;
          
          // Loops through the word
          for (int index = 0; index < randomWord.length(); index++) {
            // If the letter is in the word, the letter is replaced in the secret word
            if (randomWord[index] == letterGuess) {
              secretWord[index] = letterGuess;
              found = true;
              
              // If the letter completes the secret word, congratulate the user and end the game
              if (randomWord == secretWord) {
                cout << "Congratulations..." << secretWord << " is correct!" << endl;
                gameFinish = true;
              }
            }
          }

          // Removes the user inputted letter from remaining letters 
          for (int index = 0; index < remaining.length(); index++) {
            if (remaining[index] == letterGuess) {
              remaining.erase(index, 1);
            }
          }

          // Adds the user inputted letter to used letters
          used += letterGuess;

          // If the letter is not in the word, the user loses a guess, and displays appropriate message
          if (found == false) {
            guesses--;
            cout << "The letter " << letterGuess << " is not in the word!" << endl;

            // If the user runs out of guesses, display losing message and end the game
            if (guesses == 0) {
              cout << "\nGAME OVER! The secret word was " << randomWord << "!" << endl;
              gameFinish = true;
            }
          }
        }
      }
    }

    // Input validates the play again input
    while (true) {
      // Asks user if they want to play again
      cout << "\nWould you like to play again? (Y or N):      ";
      cin >> playAgain;

      // Converts play again input to uppercase to avoid errors
      playAgain = toupper(playAgain);
      
      // Breaks out of the loop if input is 'Y' or 'N'
      if (playAgain == 'Y' || playAgain == 'N') {
        break;
      } else {
        cout << "Invalid input" << endl;
      }
    }
    
  }

  cout << "\nThanks for playing!" << endl;
  return 0;
}