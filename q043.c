//check if the number is strong number or not
#include<stdio.h>
int main(){
    int num,x=0,org;
    printf("Enter a number: ");
    scanf("%d", &num);
    org = num;
    while(num>0){
        int y = 1;
        int n = num%10; 
        for(int i = 1;i<=n;i++){
            y *= i;
        }
        x += y;
        num=num/10;
    }
    if(x==org){
    printf("the number is strong number");
    }
    else{
    printf("the number is not strong number");
    }
}
