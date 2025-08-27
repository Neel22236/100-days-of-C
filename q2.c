//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    float a,b;

    printf("enter 2 numbers :-");
    scanf("%f %f",&a,&b);

    float w,x,y,z;

    if(b == 0){
    printf("second value can not be zero");
    }
    else{
        printf("sum is %.2f \n",a + b);
        printf("difference is %.2f \n",a - b);
        printf("product is %.2f \n",a * b);
        printf("quotient is %.2f \n",a / b);
    }
}