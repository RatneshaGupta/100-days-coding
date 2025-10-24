//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};
    int digit, maxCount = 0, mostFreqDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if(num < 0)
        num = -num;

    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
        }
    }
}