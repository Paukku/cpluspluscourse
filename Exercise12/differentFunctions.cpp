#include <iostream>


void passByValue(int a, int b){
  ++a;
  --b;
  std::cout << "Pass by value" << std::endl;
  std::cout << "value a is: " << a << " value b is: " << b << std::endl;
}

void passByConstValue(const int a, const int b){
  std::cout << "Pass by const value" << std::endl;
  std::cout << "value a is: " << a << " value b is: " << b << std::endl;
}

void passByPointer(int* a, int* b){
  std::cout << "Pass by pointer" << std::endl;
  std::cout << "value a is: " << *a << " value b is: " << *b << std::endl;

}

void passByPointerToConst(const int* a, const int* b){
  std::cout << "Pass by pointer to const" << std::endl;
  std::cout << "value a is: " << *a << " value b is: " << *b << std::endl;
}

void passByConstPointerToConst(const int* const a, const int* const b) {
  std::cout << "Pass by const pointer to const" << std::endl;
  std::cout << "value a is: " << *a << " value b is: " << *b << std::endl;

}

void passByReference(int& a, int& b) {

  std::cout << "Pass by reference" << std::endl;
  std::cout << "value a is: " << a << " value b is: " << b << std::endl;
}

void passByConstReference(const int& a, const int& b){
  std::cout << "Pass by const reference" << std::endl;
  std::cout << "value a is: " << a << " value b is: " << b << std::endl;

}