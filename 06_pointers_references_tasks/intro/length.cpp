#include <cassert>
#include <iostream>
using namespace std;

unsigned int length(const char* str)
{
    // Решение тут

    if (str == nullptr)
        return 0;
    const char* end = str;
    while(*end != '\0')
        ++end;
    return end - str;
}

int main()
{
    assert(length("a") == 1);
    assert(length("ab") == 2);
    assert(length("") == 0);
    assert(length("hello world") == 11);
    assert(length(nullptr) == 0);
    return 0;
}