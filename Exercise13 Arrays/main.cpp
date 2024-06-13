#include <iostream>
#include "arrayFunctions.h"

int main() {
    double student_scores[] {10.0,20.0,30.0,4,5,6,7,8,9};
    double scores[] {10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,1}; 
      double weights_2d[][3] {
       {10.0,20.0,30.0,},
       {40.0,50.0,60.0},
       {70.0,80.0,90.0},
       {100.0,110.0,120.0}        
    };
    double weights_3d [][3][2]{
        {
            {10,20},
            {30,40},
            {50,60},
        },
        {
            {70,80},
            {90,100},
            {110,120},
        }   
    };

    sizedArray(student_scores,std::size(student_scores));
    sizedArrayByReference(scores);
    array_2d(weights_2d, 4);
    array_3d(weights_3d, 2);

    return 0;
}