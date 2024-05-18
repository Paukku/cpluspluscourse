/*
Program chek is given value odd or even
*/

#include <iostream>

int main () {
  int number{};

  std::cout << "Please type in an integral value: ";
  std::cin >> number;

  if(number%2 == 0) {
    std::cout << number << " is even";
  } else {
    std::cout << number << " is odd";
  }

  return 0;
}