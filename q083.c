//Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces

    // Counting vowels and consonants
    while (str[i] != '\0') {
        char ch = str[i];

        // Convert uppercase to lowercase if needed
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
