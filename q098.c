// Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i = 0, len;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces
    str[strcspn(str, "\n")] = '\0'; // Remove newline if present

    len = strlen(str);

    // Print first initial
    if (str[0] != ' ' && str[0] != '\n') {
        printf("%c.", str[0]);
    }

    // Print initials of middle names
    for (i = 1; i < len; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            // Check if this is not the last word (surname)
            int j = i + 1;
            while (str[j] != ' ' && str[j] != '\0') {
                j++;
            }
            if (str[j] != '\0') {
                printf("%c.", str[i + 1]);
            }
        }
    }

    // Find and print the surname
    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            printf(" %s\n", &str[i + 1]);
            return 0;
        }
    }

    // If only one name entered
    printf(" %s\n", str);

    return 0;
}
