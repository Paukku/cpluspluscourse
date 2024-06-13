#include <iostream>

/* Pass by value is OK if the parameters are fundamental types like int, double..
Not recommended for relatively large & heavy types (user definded types).
Makes copies: can waste memory if the parameter is of a large type
*/
void passByValue(int a){
  ++a;
  std::cout << "Pass by value" << std::endl;
  std::cout << "value a is: " << a << std::endl;
}

void passByConstValue(const int a){
  std::cout << "Pass by const value" << std::endl;
  std::cout << "value a is: " << a << std::endl;
}

/* The pointer address itself is passed by value. 
Can go through dereferecing the parameter and make the changes reflect outside the scope.
Recommended for passing around large types (mostly user defined)
A pointer is very cheap to copy
"ugly" syntax but still used very widely
*/
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
by one and prints the updated value.
This way saves memory and it is recommended for passing around large types (mostly user defined).
This could feel less natural than passing by value, but it is accaptable.
*/
void passByReference(int& a) {
  ++a;
  std::cout << "Pass by reference" << std::endl;
  std::cout << "value a is: " << a << std::endl;
}

void passByConstReference(const int& a){
  std::cout << "Pass by const reference" << std::endl;
  std::cout << "value a is: " << a << std::endl;

}