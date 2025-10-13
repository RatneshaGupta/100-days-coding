//write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int binary[32]; 
    int i = 0;
    
    if (num == 0) {
        printf("Binary: 0");
        return 0;
    }
    
    while (num > 0) {
        binary[i] = num % 2;  
        num = num / 2;
        i++;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
