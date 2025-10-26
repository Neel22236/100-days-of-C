//Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0, isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each character in first string
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq1[str1[i] - 'A']++;
        i++;
    }

    i = 0;
    // Count frequency of each character in second string
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq2[str2[i] - 'A']++;
        i++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
