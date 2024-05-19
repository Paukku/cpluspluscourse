/*
Terminal calendar for C++
User give year and fist day of the year
Program will print out the calendar
WORK IN PROGRESS
*/
#include <iostream>
#include <string>
#include <vector>



int main () {
	int year {0};
	std::vector<std::string> months {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int day {0};
	std::vector<std::string> weekdays {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

	std::cout << "Please, enter a year: " << std::endl;
	std::cin >> year;
	std::cout << "Please, enter the first day of the year [1: Monday, ..., 7: Sunday]: ";
	std::cin >> day;
  
	while (day < 1 || day > 7 ) {
		std::cout << "Number is invalid. Please try again";
		std::cin >> day;
	}

	std::cout << std::endl << "Calendar for " << year << std::endl; 

	for(const std::string month : months ) {
		std::cout << "-- " << month << " " << year << " --" << std::endl;
		
		for(const std::string d : weekdays) {
			std::cout << "   " << d;
		}
		std::cout << std::endl;

		for(int x = 1; x < 32; x++) {
			std::cout << "   ";
			std::cout << x;
		}
		std::cout << std::endl;
	}
	return 0;
}