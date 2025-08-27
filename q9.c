// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
int main(){
    float p,r,t;
    printf("enter the principal amount ,rate of intestest and time period:-");
    scanf("%f %f %f",&p,&r,&t);
    printf("the simple interest is %.2f\n",p * r * t);
    for (int i;i <= t;i += 1){
        p *= (1 + r);
    }
    printf("the compund interest is %.2f",p);
}