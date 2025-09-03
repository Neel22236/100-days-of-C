// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1, count = 0; count < n; i += 2) {
        sum += i;
        count++;
    }
    printf("%d\n", sum);
}
