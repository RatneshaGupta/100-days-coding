//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, remainder, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;  
        if (remainder % 2 != 0) { 
            product = product * remainder;
            hasOdd = 1;
        }
        num = num / 10; 
    }

    if (hasOdd)
        printf("Product of odd digits: %d", product);
    else
        printf("No odd digits in the number.");

    return 0;
}
