// Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int num,rev = 0,org;
    printf("enter the number :-");
    scanf("%d",&num);
    num = org;
    while(num == 0){
        rev = rev*10 + num % 10;
        num = num % 10;
    }
    if (org == num ){
        printf("it's a palindrome");
    }
    else {
        printf("it's not a palindrome");    
    }
}
