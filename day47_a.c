//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0}; 
    int i;

    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    
    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
    }

   
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i]-'a']++;
        else if(str1[i] >= 'A' && str1[i] <= 'Z')
            freq[str1[i]-'A']++;
    }

    
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i]-'a']--;
        else if(str2[i] >= 'A' && str2[i] <= 'Z')
            freq[str2[i]-'A']--;
    }

   
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}

