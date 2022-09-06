#include<stdio.h>
#include <string.h>

void convert(int, int);
int convertHexaToDec(char[]);
int detectInputValue(char[]);

int main()
{
        char inputValue[100];

        printf("enter a positive number : ");
        scanf("%s", inputValue);

        if(detectInputValue(inputValue) == 1){
            printf("/n decimal number : %d", convertHexaToDec(inputValue));

        } else {
            printf("\nbinary number : ");
            convertDecToBase(inputValue, 2);
            printf("\noctal number : ");

            convertDecToBase(inputValue, 8);

            printf("\nhexadecimal number : ");
            convertDecToBase(inputValue, 16);
        }

        return 0;
}

int detectInputValue(char inputValue[]){

    char pattern[] = {'X', 'H', '#', 'A', 'B', 'C', 'D', 'E', 'F'};
    if(strpbrk(inputValue, pattern)){
        return 1;
    }else{
        return 0;}

};


void convertDecToBase (int num, int base)
{
        int rem = num%base;

        if(num==0)
                return;
        convertDecToBase(num/base, base);

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A');
}


int convertHexaToDec(char inputValue[])
{
    long long decimalNumber=0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int i, j, power=1;

    /* Converting hexadecimal number to decimal number */
    for(i=strlen(inputValue)-1; i >= 0; i--) {
        /*search currect character in hexDigits array */
        for(j=0; j<16; j++){
            if(inputValue[i] == hexDigits[j]){
                decimalNumber += j*power;
                power *= 16;
            }
        }
    }

    return decimalNumber;
}


