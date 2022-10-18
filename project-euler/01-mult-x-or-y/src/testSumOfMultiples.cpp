#include <iostream>
#include <math.h>
#include "../headers/sumOfMultiples.h"

void testFunction()
{
    bool t1 = sumMults(3, 5, 10) == 23;
    std::cout << t1 << std::endl;

    bool t2 = sumMults(3, 5, pow(10, 2)) == 2318;
    std::cout << t2 << std::endl;

    bool t3 = sumMults(3, 5, pow(10, 3)) == 233168;
    std::cout << t3 << std::endl;

    bool t4 = sumMults(3, 5, pow(10, 9)) == 233333333166666668;
    std::cout << t4 << std::endl;
}
