#include <iostream>
#include "add.h"
#include "multiply.h"
#include "pow.h"

void areEquals(double expected, double got)
{
    if(expected != got)
    {
        std::cout << "Expected: " << expected << " but got: " << got << std::endl;
    }
    else
    {
        std::cout << "Test passed!" << std::endl;
    }
}

int main()
{
    areEquals(4, add(2,2));
    areEquals(9, multiply(3,3));
    areEquals(1024, pow(2,10));
    return 0;
}
