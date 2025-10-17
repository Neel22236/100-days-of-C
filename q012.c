// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main() {
    printf("enter a number :-");
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("given number is positive");
    }
    else if(n<0){
        printf("given number is negative");
    }
    else
        printf("given number is zero");
}
