//write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/17 + ..... up to n terms.
#include<stdio.h>
int main(){
    int n;
    float sum = 0;
    printf("enter a number for n terms");
    scanf("%d",&n);
    for(int i= 1;i<=n;i++){
        float numerator = 2 * i;
        float denominator = 4 * i - 1;
        sum += numerator/denominator;
    }
    printf("the approximate sum is: %.1f",sum);
}