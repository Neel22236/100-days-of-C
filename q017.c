// Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){
    float a ,b ,c ,d;
    printf("write the coefficient of x square:");
    scanf("%f",&a);

    printf("write the coefficient of x:");
    scanf("%f",&b);

    printf("write the constant:");
    scanf("%f",&c);

    d =b*b-4*a*c;

    if(d > 0){
        float x;
        x = sqrtf(d);
        printf("the quadratic equation has two distict solution:-%.2f and %.2f",(b - x)/(2*a),(b + x)/(2*a));
    }
    else if(d == 0){
        printf("the quadratic equation has only one solution:- %.2f",b/(2*a));
    }
    else {
        printf("the quadratic equation has no real solution");
    }
}
