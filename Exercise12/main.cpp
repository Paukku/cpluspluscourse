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
  int x {3};
  int y  {5};

  passByValue(x, y);
  passByConstValue(x, y);
  passByPointer(&x, &y);
  passByPointerToConst(&x, &y);
  passByConstPointerToConst(&x, &y);
  passByReference(x, y);
  passByConstReference(x, y);


  return 0;
}