#include <iostream>
#include "Polynomial.h"
#include "Fraction.h"

int main()
{
    int n_int = 5;
    int quad_int = quadratic(0, 2, 9, n_int);
    std::cout << quad_int << std::endl;

    return 0;
}