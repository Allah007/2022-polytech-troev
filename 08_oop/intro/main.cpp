#include "String.cpp"
#include <iostream>

int main() 
{
    String lupa = "code";
    String za = lupa + " bad";
    std::cout << za << '\n' << "string's length is " << za.get_length();
    return 0;
}