// Write a program to find the LCM of two numbers.
#include<stdio.h>

int main() {
    int x, y, z, b,a = 1;
    printf("Enter the two numbers whose LCM you want: ");
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

    b=(x*y)/a;

    printf("HCF: %d",b);
    return 0 ;
}
