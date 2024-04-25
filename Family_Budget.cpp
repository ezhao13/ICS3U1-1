// Evan Zhao
// ICS3U1-1
// Family Budget
// October 16, 2023

// Includes libraries and namespace for the code to run
#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
  
int main() {
  // Sets the precision of the program to 2 decimal places
  cout << fixed << setprecision(2);

  // Declares input variables to find the income of each member in the family
  double papaSalary, mamaHouseCarInsurance, juniorHourlyRate, juniorHours, juniorWeeks;
  
  // Prompts the user to input necessary information to find the income
  cout << "What is the yearly salary of Papa Doe? ";
  cin >> papaSalary;
  cout << "How much house and car insurance did Mama Doe sell? ";
  cin >> mamaHouseCarInsurance;
  cout << "Enter Junior’s hourly rate: ";
  cin >> juniorHourlyRate;
  cout << "Enter Junior’s number of hours per week: ";
  cin >> juniorHours;
  cout << "Enter number of weeks Junior worked: ";
  cin >> juniorWeeks;

  // Header for the income information of the Doe family
  cout << "\n--------------------Income--------------------" << endl;
  
  // Calculates Mama Doe's commision, Junior's total salary, and the gross income 
  double mamaCommision = mamaHouseCarInsurance * 0.155;
  double juniorTotal = juniorHourlyRate * juniorHours * juniorWeeks;
  double totalIncome = papaSalary + mamaCommision + juniorTotal;

  // Prints each family member's gross income
  cout << "Papa Doe Income: $" << papaSalary << endl;
  cout << "Mama Doe Income: $" << mamaCommision << endl;
  cout << "Junior Doe Income: $" << juniorTotal << endl;
  // Prints the family's total and average monthly income 
  cout << "Total family Income: $" << totalIncome << endl;
  cout << "Average monthly Income for the family: $" << totalIncome / 12 << endl;

  // Header for the income tax information of the family 
  cout << "\n------------------Income Tax------------------" << endl;
  
  // Calculates the tax paid by each family member, total tax, and income after tax 
  double papaTax = papaSalary * 0.25;
  double mamaTax = mamaCommision * 0.12;
  double juniorTax = juniorTotal * 0.1;
  double totalTax = papaTax + mamaTax + juniorTax;
  double netIncome = totalIncome - totalTax;

  // Prints the tax paid by each family member
  cout << "Tax paid by Papa Doe: $" << papaTax << endl;
  cout << "Tax paid by Mama Doe: $" << mamaTax << endl;
  cout << "Tax paid by Junior Doe: $" << juniorTax << endl;
  // Prints the total amount of tax paid, the average tax rate, total net income, and average net income
  cout << "Total income tax paid by the family: $" << totalTax << endl;
  cout << "Overall tax rate as a percentage: " << totalTax/totalIncome * 100 << "%" << endl;
  cout << "Total net income (income – taxes): $" << netIncome << endl;
  cout << "Average monthly net income: $" << netIncome / 12 << endl;
  
  // Header for the investments done by the family
  cout << "\n------------------Investment------------------" << endl;
  
  // Declares input variables to find the investment portions
  double wholePortion, numeratorPortion, denominatorPortion;

  // Prompts the user to input investment portions to find number of shares invested
  cout << "Please enter price for one share of stock..." << endl;
  cout << "Please enter the whole number portion: ";
  cin >> wholePortion;
  cout << "Please enter the numerator of the fraction portion: ";
  cin >> numeratorPortion;
  cout << "Please enter the denominator of the fraction portion: ";
  cin >> denominatorPortion;

  // Calculates the amount of money invested, and numer of shares
  double amountInvested = netIncome * 0.105;
  double stockPrice = wholePortion + numeratorPortion / denominatorPortion;
  int stockNumber = amountInvested / stockPrice;

  // Prints the amount of money invested, and number of shares invested
  cout << "Amount of Investment: $" << amountInvested << endl;
  cout << "Number of shares of stock invested: " << stockNumber << endl;

  // Header for the electricity expenses of the family
  cout << "\n-------------Expenses Electricity-------------" << endl;

  // Declares input variables to calculate the electricity bill  
  double yearlyElectricity, monthsDiscount;

  // Prompts the user to input units of electricity used yearly and number of discounted months
  cout << "How many units of electricity over the year? ";
  cin >> yearlyElectricity;
  cout << "After how many months did the discount finish? ";
  cin >> monthsDiscount;

  // Calculates the monthly units of electricity, and the monthly cost of electricity in order to find annual electricity bill
  int monthlyElectricity = yearlyElectricity / 12;
  double monthlyCost = monthlyElectricity * 0.2 * 1.035;
  double discountMonthlyCost = monthlyCost * 0.9;
  double electricityBill = monthlyCost * (12 - monthsDiscount) + discountMonthlyCost * monthsDiscount;
  
  // Prints the monthly units of electricity and annual electricity bill
  cout << "Electricity units used per month: " << monthlyElectricity << endl;
  cout << "Total cost of electricity bill for the year: $" << electricityBill << endl;

  // Header for the gas expenses of the family
  cout << "\n--------------Expenses Gas Cost---------------" << endl;
  
  // Declares input variables to find the vehicle brand and calculate annual gas expenses
  string vehicleBrand;
  double distanceTravelled, fuelEfficiency, gasPrice;

  // Prompts the user to input the vehicle type and brand, uses getline to allow for spaces in the brand name
  cout << "Brand & Type of the vehicle: ";
  cin.ignore();
  getline(cin, vehicleBrand);
  // Prompts the user to input distance driven, fuel efficiency, and average gas price
  cout << "Distance travelled over the year: ";
  cin >> distanceTravelled;
  cout << "Fuel Effeciency(km/L): ";
  cin >> fuelEfficiency;
  cout << "Average gas price: ";
  cin >> gasPrice;

  // Calculates the litres of gas used and total annual cost of gas
  double gasConsumed = distanceTravelled / fuelEfficiency;
  double gasCost = gasConsumed * gasPrice;

  // Prints the gas consumed and annual gas expenses
  cout << "Gas consumed: " << gasConsumed << endl;
  cout << "Total cost of gasoline for the year: $" << gasCost << endl;

  // Header for the mortgage expenses of the family
  cout << "\n--------------Expenses Mortgage---------------" << endl;

  // Declares input variables to calculate the mortgage payment
  double mortgagePayment;

  // Prompts user to input the mony spent on mortgage payment every two weeks 
  cout << "Amount of bi-weekly mortgage payment: ";
  cin >> mortgagePayment;

  // Calculates the annual mortgage payment, assuming 52 weeks a year
  double totalMortgage = mortgagePayment * 52 / 2;

  // Prints the annual mortgage payment 
  cout << "Total Amount of payment for the year: $" << totalMortgage << endl;

  // Header for the other expenses such as groceries, entertainment, and cash savings
  cout << "\n----------------Other Expenses----------------" << endl;

  // Calculates the remaining expenses by subtracting the expenses from the net income
  double remainingExpenses = netIncome - amountInvested - electricityBill - gasCost - totalMortgage;
  // Calculates the portion of the remaining spent on groceries, entertainment and savings
  double groceries = remainingExpenses * 0.6;
  double entertainment = remainingExpenses * 0.2;
  double cashSavings = remainingExpenses * 0.2;

  // Prints total remaining expenses, groceries, entertainment, and cash savings
  cout << "Amount left after tax, investment & expenses: $" << remainingExpenses << endl;
  cout << "Amount spent on groceries: $" << remainingExpenses * 0.6 << endl;
  cout << "Amount spent on entertainment: $" << entertainment << endl;
  cout << "Amount of cash saving: $" << cashSavings << endl;

  // Header for the summary
  cout << "\n-------------------Summary--------------------" << endl;

  // Prints total household gross income, total income tax paid, total expenses, and total reserve (savings and investments)
  cout << "Total household gross income: $" << totalIncome << endl;
  cout << "Total income tax paid: $" << totalTax << endl;
  cout << "Total expenses: $" << electricityBill + gasCost + totalMortgage + groceries + entertainment << endl;
  cout << "Total reserve: $" << cashSavings + amountInvested << endl;

  return 0;
}