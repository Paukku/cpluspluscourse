#include <iostream>

enum class DayOfWeek{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};


void print_day(DayOfWeek day){
    switch(day){
        using enum DayOfWeek;
        case Monday : 
            std::cout << "Today is Monday";
        break;
 
        case Tuesday : 
            std::cout << "Today is Tuesday";
        break;
 
        case Wednesday : 
            std::cout << "Today is Wednesday";
        break;
 
        case Thursday : 
            std::cout << "Today is Thursday";
        break;
 
        case Friday : 
            std::cout << "Today is Friday";
        break;
 
        case Saturday : 
            std::cout << "Today is Saturday";
 
         case Sunday : 
            std::cout << "Today is Sunday";
        break;
 
        default : 
        std::cout << "No day";
    }
}
 
 
int main(){
 
    DayOfWeek day{3};
    print_day(day);
    return 0;
}