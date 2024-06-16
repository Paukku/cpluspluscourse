#include <iostream>
#include "autofunctions.h"
 

 
int main(){
 
    auto value1{10.0};
    auto value2{20.0};
 
    double result = multiplty(value1,value2);
    std::cout << "result : " << result << " value1 : " << value1 << " value2 : " << value2<< std::endl;
    ++result;
    std::cout << "result : " << result << " value1 : " << value1 << " value2 : " << value2<< std::endl;
 
    return 0;
}