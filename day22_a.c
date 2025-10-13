//Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;           
        sum += factorial(remainder);    
        num /= 10;                      
    }

    if (sum == original)
        printf("%d is a Strong number.", original);
    else
        printf("%d is not a Strong number.", original);

    return 0;
}
