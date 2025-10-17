// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
    printf("enter a character");
    char c;
    scanf("%c",&c);
    int x;
    x = (int)c;
    if(x>=65 && x<= 90)
    printf("its a uppercase alphabet");
    else if(x>=97 && x<= 122)
    printf("its a lowercase alphabet");
    else if(x>=48 && x<= 57)
    printf("its a digit");
    else if((x>=32 && x<= 47)||(x>=58 && x<= 64)||(x>=91 && x<= 96)||(x>=123 && x<= 126))
    printf("it's a special character");
    else
    printf("its not valid");
}
