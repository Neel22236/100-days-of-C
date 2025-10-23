//Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string including spaces

    // Counting characters manually (excluding '\0')
    while (str[count] != '\0') {
        count++;
    }

    // If input ends with newline (from fgets), don't count it
    if (str[count - 1] == '\n') {
        count--; 
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
