// Evan Zhao
// ICS3U1-1
// Travel Expenses Assignment
// December 1, 2023

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Opens the txt file for writing
ofstream writeExpense("travelExpense.txt");

// Defines function 
int days () {
  // Input variable
  int numDays;

  // Loops until user enters a valid number
  while (true) {
    // Prompts user to enter number of days
    cout << "Enter the total number of days spent on the trip: ";
    cin >> numDays;
    
    // Validates input
    if (numDays < 1) {
      cout << "Invalid input. " << endl;   
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << numDays << endl;
  // Returns user input
  return numDays;
}

// Defines function
double departure () {
  // Input variable
  double timeDepart;

  // Loops until user enters a valid time
  while (true) {
    // Prompts user to enter departure time 
    cout << "Enter the time of departure on the first day of the trip (24-hour format HH.MM): ";
    cin >> timeDepart;
    
    // Validates input
    if (timeDepart >= 24.00 || timeDepart < 00.00) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << timeDepart << endl;
  // Returns user input
  return timeDepart;
}

// Defines function
double arrival () {
  // Input variable
  double timeArrive;
  
  // Loops until user enters a valid time
  while (true) {
    // Prompts user to enter arrival time
    cout << "Enter the time of arrival back home on the last day of the trip (24-hour format HH.MM): ";
    cin >> timeArrive;

    // Validates input
    if (timeArrive >= 24.00 || timeArrive < 00.00) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << timeArrive << endl;
  // Returns user input
  return timeArrive;
}

// Defines function
double airfare () {
  // Input variable
  double amountAirfare;

  // Loops until user enters a valid cost
  while (true) {
    // Prompts user to enter airfare expense
    cout << "Enter the amount of any round-trip airfare: ";
    cin >> amountAirfare;

    // Validates input
    if (amountAirfare < 0) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << amountAirfare << endl;
  // Returns user input
  return amountAirfare;
}

// Defines function
double carRental () {
  // Input variable
  double amountCarRental;

  // Loops until user enters a valid cost
  while (true) {
    // Prompts user to enter car rental expense
    cout << "Enter the amount of any car rentals: ";
    cin >> amountCarRental;
    
    // Validates input
    if (amountCarRental < 0) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << amountCarRental << endl;
  // Returns user input
  return amountCarRental;
}

// Defines function
double vehicleExpense () {
  // Input variable
  double milesDriven;

  // Loops until user enters valid distance
  while (true) {
    // Prompts user to enter miles driven
    cout << "Enter the miles driven: ";
    cin >> milesDriven;

    // Validates input
    if (milesDriven < 0) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << milesDriven * 0.27 << endl;
  // Returns the calculated vehicle expense
  return milesDriven * 0.27;
}

// Defines function with parameter days
double parking (int days) {
  // Input variable
  double parkingFees;

  // Loops until user enters valid cost
  while (true) {
    // Prompts user to enter cost of parking fees
    cout << "Enter the amount of any parking fees: ";
    cin >> parkingFees;

    // Validates input
    if (parkingFees < 0) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << parkingFees << endl;

  // Returns company's allowable expenses
  if (parkingFees > 6 * days) {
    return 6 * days;
  } else {
    return parkingFees;
  }
}

// Defines function with parameter days
double taxi (int days) {
  // Input variable
  double taxiFees;
  
  // Loops until user enters valid cost
  while (true) {
    // Prompts user to enter cost of taxi fees
    cout << "Enter the amount of any taxi fees: ";
    cin >> taxiFees;
    
    // Validates input
    if (taxiFees < 0) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << taxiFees << endl;
  
  // Returns company's allowable expenses
  if (taxiFees > 10 * days) {
    return 10 * days;
  } else {
    return taxiFees;
  }
}

// Defines function
double conference () {
  // Input variable
  double conferenceFees;

  // Loops until user enters valid cost
  while (true) {
    // Prompts user to enter cost of conference fees
    cout << "Enter the conference or seminar registration fees: ";
    cin >> conferenceFees;

    // Validates input
    if (conferenceFees < 0) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << conferenceFees << endl;
  // Returns user input
  return conferenceFees;
}

// Defines function with parameter days
double hotel (int days) {
  // Input variable
  double hotelExpenses;

  // Loops until user enters valid cost
  while (true) {
    // Prompts user to enter cost of hotel expenses
    cout << "Enter the amount of hotel expenses: ";
    cin >> hotelExpenses;

    // Validates input
    if (hotelExpenses < 0) {
      cout << "Invalid input. " << endl;
    } else {
      break;
    }
  }

  // Writes input to file
  writeExpense << hotelExpenses << endl;
  
  // Returns company's allowable expenses, there is 1 less night for every day
  if (hotelExpenses > 90 * (days-1)) {
    return 90 * (days-1);
  } else {
    return hotelExpenses;
  }
}

// Defines function with parameter days, departure, and arrival
double meal (int days, double departure, double arrival) {
  // Input variable
  double mealCost;
  // Variable to add up company's allowable expense for meals
  double mealExpenses = 0;

  // Meal expenses on departure day
  cout << "Day 1" << endl;
  // Prompts user for breakfast if departure was earlier than 7am
  if (departure < 7.00) {
    // Loops until user enters valid cost
    while (true) {
      cout << "  Enter the expense of breakfast: ";
      cin >> mealCost;
      
      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    } 

    // Writes input to file
    writeExpense << mealCost << endl;
    // Adds breakfast cost 
    if (mealCost > 9) {
      mealExpenses += 9;
    } else {
      mealExpenses += mealCost;
    }
  }

  // Prompts user for lunch if departure was earlier than 12pm
  if (departure < 12.00) {
    // Loops until user enters valid cost
    while (true) {
      cout << "  Enter the expense of lunch: ";
      cin >> mealCost;

      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    }

    // Writes input to file
    writeExpense << mealCost << endl;  
    // Adds lunch cost 
    if (mealCost > 12) {
      mealExpenses += 12;
    } else {
      mealExpenses += mealCost;
    }
  }

  // Prompts user for dinner if departure was earlier than 6pm
  if (departure < 18.00) {
    // Loops until user enters valid cost
    while (true) {
      cout << "  Enter the expense of dinner: ";
      cin >> mealCost;

      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    }

    // Writes input to file
    writeExpense << mealCost << endl;
    // Adds dinner cost 
    if (mealCost > 16) {
      mealExpenses += 16;
    } else {
      mealExpenses += mealCost;
    }
  }

  // Loops through each day's meal expenses
  for (int i = 0; i < days-2; i++) {
    
    // Meal expenses on each day
    cout << "Day " << i+2 << endl;
    // Loops until user enters valid cost
    while (true) {
      cout << "  Enter the expense of breakfast: ";
      cin >> mealCost;

      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    }

    // Writes input to file
    writeExpense << mealCost << endl;
    // Adds breakfast cost 
    if (mealCost > 9) {
      mealExpenses += 9;
    } else {
      mealExpenses += mealCost;
    }
    
    // Loops until user enters valid cost
    while (true) {
      cout << "  Enter the expense of lunch: ";
      cin >> mealCost;

      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    }

    // Writes input to file
    writeExpense << mealCost << endl;
    // Adds lunch cost 
    if (mealCost > 12) {
      mealExpenses += 12;
    } else {
      mealExpenses += mealCost;
    }

    // Loops until user enters valid cost
    while (true) {
      cout << "  Enter the expense of dinner: ";
      cin >> mealCost;

      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    }

    // Writes input to file
    writeExpense << mealCost << endl;
    // Adds dinner cost 
    if (mealCost > 16) {
      mealExpenses += 16;
    } else {
      mealExpenses += mealCost;
    }
  }

  // Meal expenses on arrival day
  cout << "Day " << days << endl;
  // Prompts user for breakfast if arrival was later than 8am
  if (arrival > 8.00) {
    // Loops until user enters valid cost
    while (true) {
      cout << "  Enter the expense of breakfast: ";
      cin >> mealCost;

      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    }

    // Writes input to file
    writeExpense << mealCost << endl;
    // Adds breakfast cost 
    if (mealCost > 9) {
      mealExpenses += 9;
    } else {
      mealExpenses += mealCost;
    }
  }

  // Prompts user for lunch if arrival was later than 1pm
  if (arrival > 13.00) {
    // Loops until user enters valid cost
    while (true) {
      cout << "  Enter the expense of lunch: ";
      cin >> mealCost;

      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    }

    // Writes input to file
    writeExpense << mealCost << endl;
    // Adds lunch cost 
    if (mealCost > 12) {
      mealExpenses += 12;
    } else {
      mealExpenses += mealCost;
    }
  }

  // Prompts user for dinner if arrival was later than 7pm
  if (arrival > 19.00) {
    while (true) {
      cout << "  Enter the expense of dinner: ";
      cin >> mealCost;

      // Validates input
      if (mealCost < 0) {
        cout << "Invalid input. " << endl;
      } else {
        break;
      }
    }

    // Writes input to file
    writeExpense << mealCost << endl;
    // Closes the file
    writeExpense.close();  
    // Adds dinner cost 
    if (mealCost > 16) {
      mealExpenses += 16;
    } else {
      mealExpenses += mealCost;
    }
  }
  
  // Returns total meal expenses
  return mealExpenses;
}

// Defines function
double totalExpenses () {

  // Opens the txt file for reading
  ifstream readExpense("travelExpense.txt");
  
  // Declares variables
  string expenses;
  double totalExpense = 0;
  int lineNum = 1;

  // Read travelExpense.txt line by line
  while (getline(readExpense, expenses)) {
    // Adds expense if its not the day, departure, and arrival
    if (lineNum > 3) {
      totalExpense += stod(expenses);
    }
    // Keeps track of line number
    lineNum++;
  }

  // Closes the file
  readExpense.close();
  // Returns the total expense
  return totalExpense;
}
  
int main() {
  
  // Declares argument variables
  int numDays, depart, arrive;
  
  // Assigns variables to 3 functions
  numDays = days();
  depart = departure();
  arrive = arrival();

  // Calls functions to calculate total expense, allowable expense, and reimbursement
  double allowableExpense = airfare() + carRental() + vehicleExpense() + parking(numDays) + taxi(numDays) + conference() + hotel(numDays) + meal(numDays, depart, arrive);
  double totalExpense = totalExpenses();
  double reimbursement = totalExpense - allowableExpense;

  // Limits to 2 decimal places
  cout << fixed << setprecision(2);
  // Prints the values
  cout << "\nThe total expenses incurred is $" << totalExpense << endl;
  cout << "The total allowable expenses for the trip is $" << allowableExpense << endl;
  cout << "The excess that must be reimbursed is $" << reimbursement << endl;
  
  return 0;
}