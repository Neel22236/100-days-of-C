// Read and print elements of a one-dimensional array.
/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for(int i = 0 ; i < n ; i++){
        scanf("\n%d",&a[i]);
    }
    for(int i = 0 ; i < n ; i++){
        printf("\n%d",a[i]);
    }
}