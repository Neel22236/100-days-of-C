//write a program to find the sum of digits of a number
#include<stdio.h>
int main(){
    printf("enter a number");
    int a,b=0,rem;
    scanf("%d",&a);
    while(a>0){
        rem=a%10;
        a=a/10;
        b+=rem;
    }
    printf("sum of digit is %d",b);
}
