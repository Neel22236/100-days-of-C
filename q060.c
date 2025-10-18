// Count positive, negative, and zero elements in an array.
/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
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
    int negative = 0;
    int positive = 0;
    int zero = 0;
    for(int i = 0 ; i < n  ; i++){
        if(a[i] > 0)
        positive += 1;
        else if(a[i] < 0)
        negative += 1;
        else
        zero += 1;
    }
    printf("positive: %d , negative: %d and zero : %d",positive,negative,zero);
}
