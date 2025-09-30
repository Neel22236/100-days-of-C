// Reverse an array without taking extra space.
/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
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
    for(int i = n - 1 ; i >= 0 ; i--){
        for(int j = 0;j < i; j++){
            a[j] += a[j+1];
            a[j+1] = a[j] - a[j+1];
            a[j] -= a[j+1];
        }
    }
    for(int i = 0 ; i < n ; i++){
        printf("\n%d",a[i]);
    }
}