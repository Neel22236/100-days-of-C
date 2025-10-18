// Find the sum of array elements.
/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
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
    int sum=0;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
    }
    printf("sum of these elements is %d",sum);
}
