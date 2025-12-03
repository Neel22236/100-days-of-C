// Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Allocate memory dynamically for one Student structure
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Printing student details
    printf("\nName: %s | Roll: %d | Marks: %.2f\n",
           s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
