//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

// Structure definition
struct Student {
    int roll;
    char name[50];
    float marks;
};

// Function to update data using pointer
void updateStudent(struct Student *s) {
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

// Function to display data using pointer
void displayStudent(struct Student *s) {
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

int main() {
    struct Student st;        // normal structure variable
    struct Student *ptr;      // pointer to structure

    ptr = &st;                // assign address of structure

    printf("Update Student Info:\n");
    updateStudent(ptr);       // pass pointer

    printf("\nDisplaying Info:\n");
    displayStudent(ptr);      // pass pointer

    return 0;
}
