// Name: Jordan Munoz
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

int main() {

  std::string location;
  int length_of_stay;
  double hotel, meal;
  std::stringstream sshotel, ssmeal, sstotal;



  std::cout << "Welcome to Vacation Tracker.\n";

  //ask user for location
  std::cout << "Where did you stay? ";
  getline(std::cin, location);

  //ask user for length of stay
  std::cout << "How many nights did you stay? ";
  std::cin  >> length_of_stay;

  //ask user for total for stay charges
  std::cout << "What was the total for your hotel expenses? $";
  std::cin  >> hotel;

  //ask user for total of food charges
  std::cout << "What was the total of your food charges? $";
  std::cin  >> meal;


  double total = hotel + meal;
  sshotel << std::setprecision(2) << std::fixed << "$" << hotel;
  ssmeal << std::setprecision(2) << std::fixed << "$" << meal;
  sstotal << std::setprecision(2) << std::fixed << "$" << total;

  // print out results
  std::cout << std::setw(20) << "Location" << std::setw(20) << "Days" << std::setw(20) << "Hotel" << std::setw(20) << "Meal" << std::setw(20) << "Total" << std::endl;
  std::cout << std::setw(20) << location.substr(0,18) << std::setw(20) << length_of_stay << std::setw(20) << sshotel.str() << std::setw(20) << ssmeal.str() << std::setw(20) << sstotal.str() << std::endl;

  return 0;
}
