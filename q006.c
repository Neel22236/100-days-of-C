// Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a numbers for variable a :-");
    scanf("%d",&a);
    printf("enter another numbers for variable b :-");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
     printf("after swaping\n variable a is :-%d\n variable b is :-%d",a,b);
}
