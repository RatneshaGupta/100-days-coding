//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;  

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    first = temp;

    temp = num % (int)pow(10, digits); 
    temp = temp / 10; 

    result = last * (int)pow(10, digits) + temp * 10 + first;

    printf("Number after swapping first and last digits: %d", result);

    return 0;
}
