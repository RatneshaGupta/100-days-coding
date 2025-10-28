//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256  

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    int n = strlen(s);
    int lastIndex[CHAR_RANGE]; 
    for(int i = 0; i < CHAR_RANGE; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0; 

    for(int i = 0; i < n; i++) {
        if(lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1; 
        }
        lastIndex[(unsigned char)s[i]] = i; 
        int len = i - start + 1;
        if(len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
