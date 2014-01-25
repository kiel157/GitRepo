#include <iostream>
#include "add.h"

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
    return 0;
}
