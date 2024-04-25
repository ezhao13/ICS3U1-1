// Evan Zhao
// ICS3U1-1
// Loops assignment
// Note: remove the comments individually to not cause error

#include <iostream>
using namespace std;

int main() {
  // Prints the starting header
  cout << "We are ready for launch in T minus 10..." << endl;
  cout << "9..." << endl;
  cout << "Ignition sequence start!" << endl;

  // Loops through each number in the countdown, goes backwards
  for(int countdown = 8; countdown > 0; countdown--) {
    // Prints the loop variable
    cout << countdown << "..." << endl;
  }

  // Prints the ending statement
  cout << "All engines running!" << endl;
  cout << "Liftoff! We have liftoff!" << endl;

  return 0;
} 
