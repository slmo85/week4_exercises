#include <iostream>
#include "dimensionalAnalysis.h"

int main()
{
    double len1(0.5);
    double len2(12);

    //dimensionally correct
    double len3 = len1 + len2;
    std::cout << "len3 = " << len3 << std::endl;

    double t(5.0);
    //dimensionally incorrect
    double len4 = len1 * t;

    double v = len2 / t;

    //Impossible to tell! 
    double KE = 0.5 * 10 * v * v;

    std::cout << "KE = " << KE << std::endl;
    
    return 0;
}