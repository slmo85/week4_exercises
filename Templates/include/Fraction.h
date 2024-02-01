#pragma once
#include <string>
#include <ostream>

class Fraction
{
    public:
    Fraction(int a, int b);

    Fraction Multiply(Fraction other);

    Fraction Add(Fraction other);

    std::string toString() const;

    private:

    int numerator;
    int denominator;

    void Simplify();
};

// Declare overloading of << operator to take the fraction class. 
std::ostream& operator<<(std::ostream& out, const Fraction& f);