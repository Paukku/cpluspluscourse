#include <iostream>


void passByValue(int a){
  ++a;
  std::cout << "Pass by value" << std::endl;
  std::cout << "value a is: " << a << std::endl;
}

void passByConstValue(const int a){
  std::cout << "Pass by const value" << std::endl;
  std::cout << "value a is: " << a << std::endl;
}

// This function takes a pointer to an integer (int* a).
// It increments the value of the integer that 'a' points to.
void passByPointer(int* a){
  ++(*a);
  // a = nullptr; The pointer 'a' itself can be modified.
  std::cout << "Pass by pointer" << std::endl;
  std::cout << "value a is: " << *a << " &a: " << &a << std::endl;

}

void passByPointerToConst(const int* a){
  // a = nullptr; The pointer 'a' itself can be modified.
  std::cout << "Pass by pointer to const" << std::endl;
  std::cout << "value a is: " << *a << " &a: " << &a << std::endl;
}

void passByConstPointerToConst(const int* const a) {
  std::cout << "Pass by const pointer to const" << std::endl;
  std::cout << "value a is: " << *a << std::endl;

}

/* Takes an integer 'a' as parameter, but instead of copying its value,
directly uses the original variable 'a'. Increments the value of 'a'
by one and prints the updated value.*/
void passByReference(int& a) {
  ++a;
  std::cout << "Pass by reference" << std::endl;
  std::cout << "value a is: " << a << std::endl;
}

void passByConstReference(const int& a){
  std::cout << "Pass by const reference" << std::endl;
  std::cout << "value a is: " << a << std::endl;

}