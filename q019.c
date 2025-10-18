// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(){
    int side1 ,side2, side3;
    printf("enter the sides of the triangle :-");
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1 == side2 && side2 == side3 ){
        printf("it's a Equilateral triangle");
    }
    else if (side1 == side2 || side2 == side3 ){
        printf("it's a isoceles triangle");
    }
    else if (side1 < 0 || side2 < 0  || side3 < 0 ){
        printf("side can't be negative");
    }
    else {
        printf("it's a scalene triangle");
    }
}
