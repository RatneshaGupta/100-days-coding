//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 

    int n = strlen(name);

    
    for(i = 0; i < n; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    printf("Name with initials and surname: ");

    
    if(lastSpace != -1) {
        printf("%c", name[0]); 
        for(i = 0; i < lastSpace; i++) {
            if(name[i] == ' ' && name[i+1] != ' ')
                printf("%c", name[i+1]);
        }
        printf(" "); 
    }

    
    if(lastSpace != -1)
        printf("%s\n", name + lastSpace + 1);
    else
        printf("%s\n", name); 

    return 0;
}
