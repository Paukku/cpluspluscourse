/* Course assignment 1
  Where you live?
  Program will ask where user live and user answer for that
  In the end program will give a message
*/

#include <iostream>
#include <string> //getline is here

int main () {
  std::string country;
  std::cout << "Where do you live?" << std::endl;
  std::getline(std::cin, country);
  std::cout << "I've heard great things about " << country << ". I'd like to go sometime." << std::endl;
  

  return 0;
}