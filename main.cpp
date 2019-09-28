/ Name: Jordan Munoz
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main() {
  int length_of_stay;
  double stay_total, food_total;
  std::string location;

  std::cout << "Welcome to Vacation Tracker.\n";

  //ask user for location
  std::cout << "Where did you stay? ";
  std::cin  >> location;

  //ask user for length of stay
  std::cout << "How many nights did you stay? ";
  std::cin  >> length_of_stay;

  //ask user for total for stay charges
  std::cout << "What was the total for your hotel expenses? $";
  std::cin  >> stay_total;

  //ask user for total of food charges
  std::cout << "What was the total of your food charges? $";
  std::cin  >> food_total;

  // print out results
  std::cout << std::setw(18) << "Location Visited" << std::setw(18) << "Nights Stayed"
      << std::setw(18) << "Hotel Expenses" << std::setw(18) << "Food Expenses" << std::endl;
  std::cout << std::setw(18) << location << std::setw(18) << length_of_stay
      << std::setw(15) << "$" << stay_total << std::setw(15) << "$" << food_total << std::endl;

  return 0;
}
