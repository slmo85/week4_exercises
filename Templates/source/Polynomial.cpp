#include "Polynomial.h"
/*
int quadratic(int a, int b, int c, int x)
{
    return a*x*x + b*x + c;
}
*/

template<typename T>
T quadratic(T a, T b, T c, T x)
{
    return a*x*x + b*x + c;
}

// Explicit instantiation for the types you want to support
template int quadratic<int>(int a, int b, int c, int x);
template float quadratic<float>(float a, float b, float c, float x);
template double quadratic<double>(double a, double b, double c, double x);
// You can add more instantiations for other types as needed
