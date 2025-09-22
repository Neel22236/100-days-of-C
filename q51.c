/*
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = num;i>=1;i--){
        for(int k = i;k > 1; k--){
            printf("   ");
        }
        for(int j = i;j<=num;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
}