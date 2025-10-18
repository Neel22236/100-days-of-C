//check if the number is perfect or not
#include<stdio.h>
int main(){
    int num,x=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<num;i++){
        if(num%i == 0){
            x+=i;
        }
    }
    if(num == x){
        printf("the number is perfect number");
    }
    else{
        printf("the number is not perfect number");
    }
}
