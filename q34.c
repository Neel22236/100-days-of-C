// Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, isPrime = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("The number is not prime.\n");
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("The number is not a prime number.\n");
        } else {
            printf("The number is a prime number.\n");
        }
    }

    return 0;
}
