/*
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    //upper half
    for( int i = 1 ; i <= n ; i++ ){
        for( int j = n - i ; j > 0 ; j-- ){
            printf(" ");
        }
        for( int k = 1 ; k <= 2*i - 1 ; k++){
            printf("*");
        }
        printf("\n");
    }
    //lower half
    for( int i = 1 ; i <= n - 1 ; i++ ){
        for( int j = 1 ; j <= i ; j++){
            printf(" ");
        }
        for( int k = 1 ; k <= 2*(n-i) - 1 ; k++ ){
            printf("*");
        }
        printf("\n");
    }
}
