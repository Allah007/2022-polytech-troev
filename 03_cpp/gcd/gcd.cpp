#include <cassert>
#include <iostream>

int gcd(int a, int b){

    if (a < 0){

        a *= -1;

    }

    if (b < 0){

        b *= -1;

    }

    // Решение тут

    while(a && b){
        
        int c=a%b;
        
        a=b;
        
        b=c;
        
    }
    
    return a | b;
    
}

int main(){
    
  assert(gcd(0, 5) == 5);
  
  assert(gcd(9, 0) == 9);
  
  assert(gcd(48, 64) == 16);
  
  assert(gcd(-64, 48) == 16);
  
  assert(gcd(30, 18) == 6);
  
  assert(gcd(-30, -18) == 6);
  
  assert(gcd(270, 192) == 6);

  return 0;
  
}
