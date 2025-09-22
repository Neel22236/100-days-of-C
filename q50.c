/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1;i <= n ; i++){
        for( int j = 1 ; j <= i - 1 ; j++ ){
            printf("   ");
        }
        for( int k = n - i + 1 ; k > 0 ; k-- ){
            printf(" * ");
        }
        printf("\n");
    }
}