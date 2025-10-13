//Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result = result + (remainder * remainder * remainder);
        original = original / 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
