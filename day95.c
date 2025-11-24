//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return the top student
struct Student findTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // returning a structure
}

int main() {
    struct Student s[5], top;
    int i;

    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // call the function and store returned structure
    top = findTopStudent(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Name      : %s\n", top.name);
    printf("Roll No   : %d\n", top.roll_no);
    printf("Marks     : %.2f\n", top.marks);

    return 0;
}
