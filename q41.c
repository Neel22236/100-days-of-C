#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    int digits = 0;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    if (digits == 1) {
        printf("After swap: %d\n", num);
        return 0;
    }

    int lastDigit = num % 10;
    int firstDigit = num / (int)pow(10, digits - 1);
    int middlePart = (num % (int)pow(10, digits - 1)) / 10;

    int swappedNum = lastDigit * (int)pow(10, digits - 1)
                     + middlePart * 10
                     + firstDigit;

    printf("After swapping first and last digits: %d\n", swappedNum);

    return 0;
}
