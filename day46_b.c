//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; 
    int i;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        
        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; 
            if(freq[ch - 'a'] == 2) { 
                printf("First repeating lowercase character: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase character found.\n");
    return 0;
}
