// Merge two arrays.
/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include<stdio.h>
int main(){
    // 1st array 
    int n1;
    printf("enter the size of array");
    scanf("%d",&n1);
    int a[n1];
    printf("enter the elements of array \n");
    for(int i = 0 ; i < n1 ; i++){
        scanf("%d",&a[i]);
    }
    // 2nd array
    int n2;
    printf("enter the size of array");
    scanf("%d",&n2);
    int b[n2];
    printf("enter the elements of array \n");
    for(int i = 0 ; i < n2 ; i++){
        scanf("%d",&b[i]);
    }
    // array merge
    int c[n1 + n2];
    for(int i = 0 ; i < n1 ; i++){
        c[i] = a[i];
    }
    for(int i = 0 ; i < n2 ; i++){
        c[n1 + i] = a[i];
    }
}
