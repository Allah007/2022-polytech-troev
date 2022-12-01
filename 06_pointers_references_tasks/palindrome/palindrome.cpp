#include <iostream>
#include<cassert>
#include<cstring>

using namespace std;

unsigned int length(const char* str)
{
    if (str == nullptr)
        return 0;
    const char* end = str;
    while(*end != '\0')
        ++end;
    return end - str;
}

bool palindrome_check(const char* s)
{
	int k = 0;
	int n = length(s) - 1;
	for (int i = 0, k = n; i <= k; i++, k--)
	{
		if (s[i] != s[k])
			return false;
	}
	return true;
}

int main()
{
    assert(palindrome_check("a") == true);
	assert(palindrome_check("123321") == true);
	assert(palindrome_check("ab") == false);
	assert(palindrome_check("b") == true);
	assert(palindrome_check("uehheu") == true);
	assert(palindrome_check("super") == false);
	assert(palindrome_check("repaper") == true);
	assert(palindrome_check(nullptr) == true);
	assert(palindrome_check(" ") == true);
	return  0;
}