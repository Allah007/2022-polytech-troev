#include <iostream>
#include <string.h>

bool ispalindrome(char man[]){

    int n = strlen(man);

    int fl = 1;

    for (int i = 0; i < n; i++){

        if (man[i] == man[n-1-i]){

            fl = fl * 1;

        }

        else {


            fl = fl * 0;

        }

    }

    if (fl == 1){

        std::cout << "True" << std::endl;

        return true;

    }

    else {

        std::cout << "False" << std::endl;

        return false;

    }

}

int main(){

    char man[100];

    std::cout << "Enter a word/phrase" << std::endl;

    std::cin.getline(man, 100);
 
    std::cout << "The word is a palindrome -" << ispalindrome(man) << std::endl;

    return 0;

}
