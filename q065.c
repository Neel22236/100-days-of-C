// Search in a sorted array using binary search.
/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array \n");
    for(int i = 0 ; i < n ; i++){
        scanf("\n%d",&a[i]);
    }
    printf("enter the number whose index you want: ");
    int num;
    scanf("%d",&num);
    for(int i = 0 ; i < n  ; i++){
        if(num == a[i]){
            printf("found at index %d",i);
            exit(0);
        }
    }
    printf("element was not the part of array");
}