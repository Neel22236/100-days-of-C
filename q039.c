//write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(){
    int x,y=1;
    printf("enter the number");
    scanf("%d",&x);
    while(x>0){ 
        if((x%10)%2!=0){
            y*=x%10;
        }
        x=x/10;
    }
    printf("the product of odd digit of the number are: %d",y);
} 
