#include <iostream>
 
 // reference functio
int& multiply(  int& a,   int& b){
    return a*=b;
}

// pointer functio
int* max_return_pointer(int* a, int* b) {
    if(*a > *b) {
        return a;
    }
    else {
        return b;
    }
}

int main( ){
 
    int value1 {10};
    int value2 {20};
 
  int& result = multiply(value1,value2);
  std::cout << "result : " << result <<" value1 : " << value1 << " value2 : " << value2<< std::endl;
  ++result;
  std::cout << "result : " << result <<" value1 : " << value1 << " value2 : " << value2<< std::endl;

  int* p_max = max_return_pointer(&value1, &value2);
  std::cout << "max value : " << *p_max << std::endl;
 
    return 0;
}