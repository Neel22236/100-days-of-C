//Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;        // Normal structure variable
    struct Student *ptr;     // Pointer to structure

    ptr = &s;  // Point the pointer to structure variable

    // Taking input using pointer
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%d", &ptr->marks);

    // Display modified data
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
