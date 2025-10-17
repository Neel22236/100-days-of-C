// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main(){
    char c;
    printf("enter a character :-");
    scanf("%c",&c);
    if(c=='a' || c== 'A'|| c== 'e'|| c== 'E'||c== 'i'||c== 'I'||c== 'o'||c== 'O'||c== 'u'||c== 'U')
    printf("it's a vowel");
    else
    printf("its a consonant");
}
