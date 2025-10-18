//write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ..... up to n terms.
#include<stdio.h>
int main(){
    int n;
    float sum = 1;
    printf("enter a number for n terms");
    scanf("%d",&n);
    for(int i= 2;i<=n;i++){
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator/denominator;
    }
    printf("the approximate sum is: %.1f",sum);
}
