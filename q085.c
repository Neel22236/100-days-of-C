//Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces

    // Find the length of the string manually (excluding '\n' and '\0')
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse and print the string
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}