//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    // ----------- Writing to Binary File -----------
    fp = fopen("employee.dat", "wb");
    if (!fp) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Write struct to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data stored successfully!\n");

    // ----------- Reading from Binary File -----------
    fp = fopen("employee.dat", "rb");
    if (!fp) {
        printf("Error opening file!");
        return 1;
    }

    // Read struct from file
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details Read From File ---\n");
    printf("ID      : %d\n", empRead.id);
    printf("Name    : %s\n", empRead.name);
    printf("Salary  : %.2f\n", empRead.salary);

    return 0;
}
