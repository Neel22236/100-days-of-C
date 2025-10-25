//Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[1000], ch;
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string including spaces

    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    // Counting frequency
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
