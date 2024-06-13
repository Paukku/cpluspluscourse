/*
Terminal calendar for C++
User give year and fist day of the year
Program will print out the calendar
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

bool isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    static const std::vector<int> daysInMonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
	if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

void printMonthCalendar(int startDay, int numDays) {
    std::cout << "Mon  Tue  Wed  Thu  Fri  Sat  Sun" << std::endl;

    for (int i = 1; i < startDay; ++i) {
        std::cout << "   " << "  ";
    }

    for (int day = 1; day <= numDays; ++day) {
        std::cout << std::setw(2) << day << "   ";

        if ((day + startDay - 1) % 7 == 0) {
            std::cout << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
}

void printYearCalendar(int startDay, int year) {
    static const std::vector<std::string> monthNames = {
       "January", "February", "March", "April", "May", "June", 
	   "July", "August", "September", "October", "November", "December"
    };

    int currentStartDay = startDay;

	std::cout << std::endl << "Calendar for " << year << std::endl; 

    for (int month = 1; month <= 12; ++month) {
        int daysInMonth = getDaysInMonth(month, year);
        std::cout << "--  " << monthNames[month - 1] << year << "  --" << std::endl;
        printMonthCalendar(currentStartDay, daysInMonth);
        currentStartDay = (currentStartDay + daysInMonth - 1) % 7 + 1;
    }
}

int main () {
	int year {0};
	int day {0};
	
	std::cout << "Please, enter a year: " << std::endl;
	std::cin >> year;
	std::cout << "Please, enter the first day of the year [1: Monday, ..., 7: Sunday]: ";
	std::cin >> day;
  
	while (day < 1 || day > 7 ) {
		std::cout << "Number is invalid. Please try again";
		std::cin >> day;
	}

	printYearCalendar(day, year);
	return 0;
}