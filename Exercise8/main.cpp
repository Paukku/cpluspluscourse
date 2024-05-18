#include <iostream>

int main () {
	int day{0};

	std::cout << "Which day is today [1: Monday, ..., 7: Sunday]" << std::endl;
	std::cin >> day;

	if((day< 1 )|| (day > 7)){
        std::cout << day << " is not a valid day. Bye!" << std::endl;
        return 0 ; // Kill the program before it hits the end of the main function
                    // because at this point we have no more to do.
    }

	int days_passed {0};
	std::cout << "How many days have passed up to today" << std::endl;
	std::cin >> days_passed;

	switch (day)
	{
	case 1:
		std::cout << "Today is Monday.";
		break;
	case 2:
		std::cout << "Today is Tuesday.";
		break;
	case 3:
		std::cout << "Today is Wednesday.";
		break;
	case 4:
		std::cout << "Today is Thursday.";
		break;
	case 5:
		std::cout << "Today is Friday.";
		break;
	case 6:
		std::cout << "Today is Saturday.";
		break;
	default:
		std::cout << day << "Today is Sunday.";
		break;
	}

	int normalized_diff = (days_passed %7);
  
   int day_in_the_past = day - normalized_diff;

   //If the day in the past happens to be negative, we throw it back
   //in the positive range, again for ease of our logic. This way
   //we can use the same logic to print out the days
   if(day_in_the_past < 0){
       day_in_the_past += 7;
   }


	switch (day_in_the_past) 
	{
	case 1:
		std::cout << "Monday.";
		break;
	case 2:
		std::cout << "Tuesday.";
		break;
	case 3:
		std::cout << "Wednesday.";
		break;
	case 4:
		std::cout << "Thursday.";
		break;
	case 5:
		std::cout << "Friday.";
		break;
	case 6:
		std::cout << "Saturday.";
		break;
	default:
		std::cout << "Sunday.";
		break;
	}

  return 0;
}