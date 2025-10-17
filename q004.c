//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    float pi = 3.14,r;
    printf("enter the radius of the circle :-");
    scanf(" %f", &r); 
    printf("the area of the circle is:- %.2f\n",pi * r * r);
    printf("the circumference of the circle is:- %.2f",2 * pi * r);
}
