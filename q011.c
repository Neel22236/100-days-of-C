// Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
    printf("enter a number :-");
    int n;
    scanf("%d",&n);
    if (n % 2 == 0){
        printf("it's a even number");
    }
    else
    printf("it's a odd number");
}
