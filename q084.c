// Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO


*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin); // Read the input string

    // Convert to uppercase manually
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase to uppercase
        }
        i++;
    }

    printf("String in uppercase: %s", str);

    return 0;
}
