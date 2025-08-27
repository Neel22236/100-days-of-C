// Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main(){
    int y;
    printf("enter a year :-");
    scanf("%d",&y);
    if(y%4==0){
        if(y%400==0){
            printf("this year is leap");
        }
    else if(y%100==0){
        printf("this year is not leap year");
    }
    else{
        printf("this year is leap year");
    }
    }
    else{
        printf("this is not a leap year");
    }
}