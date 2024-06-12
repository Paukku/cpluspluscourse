/*
In this exercise, I am exploring the creation of functions in C++ 
and understanding how different parameter types (value, const value, 
pointer, const pointer, and references) work.

Command to build several cpp files :
cl /EHsc main.cpp differentFunctions.cpp 

*/

#include <iostream>
#include "differentFunctions.h"

int main () {
  int a {3};


  std::cout << "The value before it goes into the function 'PassByValue': " << a << std::endl;
  passByValue(a);
  std::cout << "The value after it goes into the function 'PassByValue': " << a << std::endl << std::endl;
  
  std::cout << "The value before it goes into the function 'passByConstValue': " << a << std::endl;
  passByConstValue(a);
  std::cout << "The value after it goes into the function 'passByConstValue': " << a << std::endl << std::endl;
  

  std::cout << "The value before it goes into the function 'passByPointer': " << a << std::endl;
  passByPointer(&a);
  std::cout << "The value after it goes into the function 'passByPointer': " << a << std::endl << std::endl;
  

  std::cout << "The value before it goes into the function 'passByPointerToConst': " << a << std::endl;
  passByPointerToConst(&a);
  std::cout << "The value after it goes into the function 'passByPointerToConst': " << a << std::endl << std::endl;
  

  std::cout << "The value before it goes into the function 'passByConstPointerToConst': " << a << std::endl;
  passByConstPointerToConst(&a);
  std::cout << "The value after it goes into the function 'passByConstPointerToConst': " << a << std::endl << std::endl;


  std::cout << "The value before it goes into the function 'passByReference': " << a << std::endl;
  passByReference(a);
  std::cout << "The value after it goes into the function 'passByReference': " << a << std::endl << std::endl;


  std::cout << "The value before it goes into the function 'passByConstReference': " << a << std::endl;
  passByConstReference(a);
  std::cout << "The value after it goes into the function 'passByConstReference': " << a << std::endl;


  return 0;
}