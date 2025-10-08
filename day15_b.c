#include <stdio.h>

int main() {
    char num[50];

    printf("Enter a number: ");
    scanf("%s", num);

    printf("Reversed number: ");
    for(int i = strlen(num) - 1; i >= 0; i--) {
        printf("%c", num[i]);
    }
    printf("\n");

    return 0;
}
