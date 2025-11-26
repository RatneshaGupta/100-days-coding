//Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student s1, s2;

    // Input for first structure
    printf("Enter details for Student 1:\n");
    printf("Roll number: ");
    scanf("%d", &s1.roll);

    printf("Name: ");
    scanf("%s", s1.name);

    // Input for second structure
    printf("\nEnter details for Student 2:\n");
    printf("Roll number: ");
    scanf("%d", &s2.roll);

    printf("Name: ");
    scanf("%s", s2.name);

    // Check if both structures are identical
    if (s1.roll == s2.roll && strcmp(s1.name, s2.name) == 0) {
        printf("\nBoth structures are IDENTICAL! 🎉\n");
    } else {
        printf("\nStructures are NOT identical 😬\n");
    }

    return 0;
}
