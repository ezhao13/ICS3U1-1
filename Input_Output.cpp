// Evan Zhao
// ICS3U1-1
// I/O Test Hands On 

#include <iostream>
using namespace std;

int main() {
  // Defines the cups of sugar, butter, and flour required for one cookie
  double sugar = 1.5/48;
  double butter = 1.0/48;
  double flour = 2.75/48;
  
  // Defines the input variable 
  int numCookies;

  // Prompts user to input number of cookies
  cout << "Enter number of cookies: ";
  cin >> numCookies;

  // Calculates the sugar, butter, and flour required for the number of cookies
  sugar = sugar * numCookies;
  butter = butter * numCookies;
  flour = flour * numCookies;

  // Outputs cookie recipe 
  cout << "You need " << sugar << " cups of sugar, " << butter << " cups of butter, and " << flour << " cups of flour." << endl;
  
  return 0;
}