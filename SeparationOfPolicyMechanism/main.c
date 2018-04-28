/*Samantha Krall
Separation of Policy and Mechanism
Take a decimal as user input between 0 -4095
display as a 32 bit number in binary (least sig. to the right)
display as a 32 bit hexadecimal
transform input by shifting the number 16 bits to the left
    mask out (AND) the bottom 16 bits
    add (OR) the hex number 0x07FF to produce final number
    display final number in binary, hex and decimal
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, decimal, binary = 0, remainder, base = 1, quotient;
    printf("Please input a decimal between 0 - 4095:\n");
    scanf("%d", &num);
    decimal = num;
    while (num > 0){
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("You have inputted %d\n", decimal);
    printf("In binary: %d\n", binary);
    remainder = 0;
    int i, j = 0;
    char hexNum[100];
    quotient = decimal;
    while(quotient != 0){
        remainder = quotient % 16;
        if(remainder < 10){
            hexNum[j++] = 48 + remainder;
        }else{
            hexNum[j++] = 55 + remainder;
        }
        quotient = quotient / 16;
    }
    for(i = j; i >= 0; i--){
        printf("%c\n", hexNum[i]);
    }
    unsigned int convert = binary;
    convert << 16;
    int mask = 0000000000000000;
    int a = convert & mask;
    int finalNum = a | 0x07FF;
    printf("The final number: %d\n", finalNum);
}

