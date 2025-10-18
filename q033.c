// Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main(){
    int num,x,y = 0,z;
    printf("enter the number:-");
    scanf("%d",&num);
    x = num;
    while(num != 0){
        z = num%10;
        y += z * z * z;
        num = num / 10;
    }
    if(y == x){
        printf("the number is armstrong");
    }
    else{
        printf("the number is not a armstrong");
    }
}
