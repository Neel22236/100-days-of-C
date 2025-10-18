// Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>

int main() {
    int x, y, z, a = 1;
    printf("Enter the two numbers whose HCF you want: ");
    scanf("%d%d", &x, &y);

    if(x <= y) {
        z = y;
    } else {
        z = x;
    }

    for(int i = 1; i <= z; i++) {
        if(x % i == 0 && y % i == 0) {
            a = i;
        }
    }

    printf("HCF: %d\n", a);
    return 0;
}
