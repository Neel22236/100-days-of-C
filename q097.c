// Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces

    // Print first initial
    if (str[0] != ' ' && str[0] != '\n') {
        printf("%c.", str[0]);
    }

    // Loop through to find initials after spaces
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\0') {
            printf("%c.", str[i + 1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}
