// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n;
    long long product = 1;
    int hasEven = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1; 
    }
    if (hasEven)
        printf("%lld\n", product);
    else
        printf("0\n");
}
