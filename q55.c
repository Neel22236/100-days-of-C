/*
Write a program to print all the prime numbers from 1 to n.
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers before 2\n");
        return 0;
    }

    printf("Prime numbers before %d are:\n", n);

    for (int i = 2; i < n; i++) {
        int x = 1; // Assume i is prime
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) {
                x = 0; 
                break;
            }
        }
        if (x) {
            printf("%d\n", i);
        }
    }

    return 0;
}
