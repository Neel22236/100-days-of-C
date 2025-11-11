//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256]; // To store last index of every character
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0;     // Start index of current window
    int maxLen = 0;    // Length of longest substring

    for(int end = 0; end < n; end++) {
        // If character is already in the current window
        if(lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        lastIndex[(unsigned char)s[end]] = end;

        int currLen = end - start + 1;
        if(currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}