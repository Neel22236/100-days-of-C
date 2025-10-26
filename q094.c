// Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100], longest[100];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    // In case the last word is the longest and not followed by a space
    word[j] = '\0';
    if (strlen(word) > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
