/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2 == 0){
        m=n/2;
        n=n/2;
    }
    else{
        m=n/2+1;
        n=n/2;
    }
    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= 2 * i - 1 ; j++){
            printf("*\n");
        }
        printf("\n");
    }
    for(int i = n ; i >= 1 ; i--){
        for(int j = 2 * i - 1 ; j >= 1 ; j--){
            printf("*\n");
        }
        printf("\n");
    }

}
