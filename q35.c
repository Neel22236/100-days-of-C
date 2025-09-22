// Write a program to print all factors of a given number.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i ==0){
            printf("one of the factor of %d is %d\n",n,i);
        }
    }
}