// Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a numbers for variable a :-");
    scanf("%d",&a);
    printf("enter another numbers for variable b :-");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
     printf("after swaping\n variable a is :-%d\n variable b is :-%d",a,b);
}
