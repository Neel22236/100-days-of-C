// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int totalseconds,hour,minutes,second;
    printf("enter the total seconds:-");
    scanf("%d",&totalseconds);
    hour = totalseconds / 3600;
    minutes = totalseconds % 3600 / 60;
    second = totalseconds % 60;
    printf("hours:minutes:seconds form is %d:%d:%d",hour,minutes,second);

}
