#include <math.h>
#include <stdio.h>

/*#include <ctype.h>
#include <stdlib.h>*/

int DecToBase(int base, int n);

int main(){
    int i = 0;
    int base = 2;
    //int result = DecToBase(base, i);
    for(i =0; i<=25; i++)
    printf("The decimal number %d in base %d is %d \n", i, base, DecToBase(base, i));
    return 0;
}

int DecToBase(int base, int n){
    int num = 0;
    int quotient = n;
    int remainder = 0;
    int i = 0;
    while(quotient != 0){
        remainder = quotient % base;
        quotient = quotient / base;
        num = (remainder * pow(10, i)) + num;
        i++;
    }
    return num;
}

