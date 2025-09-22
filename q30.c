//write a program to reverse a given number
#include<stdio.h>
int main(){
    int num,rev = 0 ;
    printf("enter the number of which reverse you want");
    scanf("%d",&num);
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("the reverse number is %d",rev);
}