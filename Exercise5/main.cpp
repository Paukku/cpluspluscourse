/*
Write a program that reads in the length and width and height of a box and computes the base area and volume using the following formulas:

base_area = width * length
volume = base_area * height
*/

#include <iostream>

int main () {
    double length {};
    double width {};
    double height {};
    double base_area {};
    double volume {};

    std::cout << "Welcome to the box calculator. Please type in length, width and height information: " << std::endl;
    std::cout << "length: " << std::endl;
    std::cin >> length;
    std::cout << "width: " << std::endl;
    std::cin >> width;
    std::cout << "height: " << std::endl;
    std::cin >> height;

    base_area = width * length;
    volume = base_area * height;

    std::cout << "The base area is: " << base_area << std::endl;
    std::cout << "The volume is: " << volume << std::endl;

    return 0;
}