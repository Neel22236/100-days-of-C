// Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; // To store frequency of lowercase letters
    int i = 0, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces

    // Traverse the string
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; // Increment frequency
            if (freq[ch - 'a'] == 2) { // First repeating
                printf("First repeating character: %c\n", ch);
                found = 1;
                break;
            }
        }
        i++;
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
