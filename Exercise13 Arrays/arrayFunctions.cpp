#include <iostream>

void sizedArray( const double array[], size_t size) {
    double sum{};
    for(size_t i{}; i < size; ++i) // Loop through rows
    {
        sum += array[i];

    }
    std::cout << "Array sum : " << sum << std::endl << std::endl; 

}
void sizedArrayByReference( const double (&array) [10]){
    double sum{};
    for(size_t i{}; i < std::size(array) ; ++i){
        sum  += array[i];
    }
    std::cout << "Array By Reference sum : " << sum << std::endl << std::endl; 
}

void array_2d(const double array[][3], size_t size)
{
    double sum{};
    for(size_t i{}; i < size; ++i) // Loop through rows
    {
        for(size_t j{}; j < 3; ++j) // Loop through elements in a row
        {
            sum += array[i][j]; // Array access notation
        }
    }

    std::cout << "2d array sum : " << sum << std::endl << std::endl;
}

void array_3d(const double array[][3][2], size_t size){
    
    double sum{};
    for(size_t i{}; i < size; ++i) // Loop through rows
    {
        for(size_t j{}; j < 3; ++j) // Loop through elements in a row
        {
             for(size_t k{}; k < 2; ++k){
                 sum += array[i][j][k];
             }
        }
    }
    std::cout << "3d array sum : " << sum << std::endl << std::endl; 
}