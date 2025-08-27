// Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
    int i,n,x = 0;
    printf("enter the number till which you want sum of the natural numbers :-");
    scanf("%d",&n);
    for(i = 1;i <= n;i = i + 1) {
        x += i;
    }
    printf("sum of the n natural numbers is %d",x);
}