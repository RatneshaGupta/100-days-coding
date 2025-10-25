//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100], word[100];
    int i, j = 0, maxLen = 0, len;

   
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; 
    

    int n = strlen(str);
    longest[0] = '\0';

    
    for(i = 0; i <= n; i++) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i]; 
        } else {
            if(j > 0) {
                word[j] = '\0'; 
                len = j;
                if(len > maxLen) {
                    maxLen = len;
                    strcpy(longest, word); 
                }
                j = 0; 
            }
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
