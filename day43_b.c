//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++);
    int len = i;

    
    for(i = 0, j = len - 1; i < j; i++, j--) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
