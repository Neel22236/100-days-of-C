// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main() {
    int l,b;
    printf("enter the length and breadth:-");
    scanf("%d %d",&l,&b);

    printf("then the area is:- %d\n",l * b);
    
    printf("then the is:- %d",2 * (l + b));
}
