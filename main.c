#include <math.h>
#include <stdio.h>
#include <string.h>
/*#include <ctype.h>
#include <stdlib.h>*/

int DecToBase(int base, int n);
//int DecToHexa(int num);

int main(){
    int i = 0;
    int base = 16;
    //int result = DecToBase(base, i);
    for(i =0; i<=25; i++){
    printf("The decimal number %d in base %d is %d \n", i, base, DecToBase(base, i));
    //printf("The decimal number %d in base %d is %d \n", i, base, DecToHexa(i));
    }
    return 0;

}

int DecToBase(int base, int n){
    int convertedNum = 0;
    int quotient = n;
    int remainder = 0;
    int power = 1;
    while(quotient != 0){
        remainder = quotient % base;
        convertedNum = convertedNum + remainder * power;
        power *= 10;
        quotient = quotient / base;
    }
    return convertedNum;
}




/*int DecToHexa(int num){
    int remainder;
    char hex=[], finalHex=[];
    while(num != 0){
        num = num / 16;
        remainder = num % 16;
        switch (remainder){
            case 0:
                hex = "0";
                break;
            case 1:
                hex = "1";
                break;
            case 2:
                hex = "2";
                break;
            case 3:
                hex = "3";
                break;
            case 4:
                hex = "4";
                break;
            case 5:
                hex = "5";
                break;
            case 6:
                hex = "6";
                break;
            case 7:
                hex = "7";
                break;
            case 8:
                hex = "8";
                break;
            case 9:
                hex = "2";
                break;
            case 10:
                hex = "A";
                break;
            case 11:
                hex = "B";
                break;
            case 12:
                hex = "C";
                break;
            case 13:
                hex = "D";
                break;
            case 14:
                hex = "E";
                break;
            case 15:
                hex = "F";
                break;
        }
        strcat(hex, finalHex);
        finalHex = hex;
    }
    return finalHex;
}*/

/*int DecToHexa(int n){
    long int remainder,quotient;
	int i, j = 0;
	char hexadecimalNumber[100];
	char convertedNumber;
	//printf("Enter any decimal number: ");
	//scanf("%ld",&decimalNumber);
	quotient = n;
	while(quotient != 0) {
		remainder = quotient % 16;
		//To convert integer into character
		if(remainder < 10)
            hexadecimalNumber[j++] = 48 + remainder;
        else
            hexadecimalNumber[j++] = 55 + remainder;
        quotient = quotient / 16;
	}

        for (i = j; i >= 0; i--)
            //printf("%c", hexadecimalNumber[i]);
            convertedNumber = hexadecimalNumber[i];
        return convertedNumber;
	}*/


//if (base = 2 || base = 8) call DecTOBase; else if(base = 16) call DecToHexa
//functional in base 2 and base 8


