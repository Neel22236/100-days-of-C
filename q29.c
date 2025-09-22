// write a program to calculate the factorial of a given number
#include<stdio.h>
int main(){
    int n,f=0;
    printf("the the number of which factorial you want:-");
    scanf("%d",&n);
    for(int i;i<=n;i++){
            f=f+i;
    }
    printf("the factorial of number %d is %d",n,f);
}