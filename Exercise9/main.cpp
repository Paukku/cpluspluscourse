#include <iostream>

int main () {
	int x, y;

	std::cout << "Welcome to territory control." << std::endl << "Please type in your x and y positions" << std::endl;
	std::cout << "Your x location" << std::endl;
	std::cin >> x;
	std::cout << "Your y location" << std::endl;
	std::cin >> y;

	if(x < 10 && x > -10 && y < 5 && y > -5 ) {
		std::cout << "You are completely surrounded. Don't move!" << std::endl;
	} 
	else {
		std::cout << "You're out of reach!" << std::endl;
	}
	
	return 0;
}