// Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int start = 0, end = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // Read input including spaces
    str[strcspn(str, "\n")] = '\0'; // Remove newline if present

    while (str[end] != '\0') {
        // Find end of word
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }

        // Reverse the word from 'start' to 'end - 1'
        int left = start, right = end - 1;
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }

        // Move to next word
        if (str[end] == ' ')
            end++;
        start = end;
    }

    printf("Sentence after reversing each word: %s\n", str);

    return 0;
}
