#include <iostream>

class Complex
{
public:
    int r_part, i_part;

    Complex(int r_part, int i_part)
    {

    }

    const Complex operator+(const Complex rv) const;
    const Complex operator-(const Complex rv) const;
    const bool operator==(const Complex rv) const;
    const double abs() const;
};