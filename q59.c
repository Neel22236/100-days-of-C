// Count even and odd numbers in an array.
/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array \n");
    for(int i = 0 ; i < n ; i++){
        scanf("\n%d",&a[i]);
    }
    int odd = 0;
    int even = 0;
    for(int i = 0 ; i < n  ; i++){
        if( a[i]%2 != 0 )
            odd += 1;
        if( a[i]%2 == 0 )
            even += 1;
    }
    printf("the odd elements are %d and even elements are %d",odd,even);
}