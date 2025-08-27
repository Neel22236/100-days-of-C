// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>1
int main() {
    float t;
    printf("enter the temperature in celsius");
    scanf("%f",&t);
    t = (9.0 / 5.0) * t + 32;
    printf("the entered temperature in fahrenheit is %.2f",t);
}