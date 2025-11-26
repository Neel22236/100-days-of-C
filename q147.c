// Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    // --- Writing to binary file ---
    fp = fopen("employee.bin", "wb");   // open for writing in binary
    if (fp == NULL) {
        printf("File not created.\n");
        return 1;
    }

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // Write structure to file
    fwrite(&e, sizeof(struct Employee), 1, fp);

    fclose(fp);


    // --- Reading from binary file ---
    fp = fopen("employee.bin", "rb");   // open for reading in binary
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    // Read structure from file
    fread(&e_read, sizeof(struct Employee), 1, fp);

    fclose(fp);

    // Display data read from file
    printf("\nEmployee Details Read From File:\n");
    printf("Name: %s\n", e_read.name);
    printf("ID: %d\n", e_read.id);
    printf("Salary: %.2f\n", e_read.salary);

    return 0;
}
