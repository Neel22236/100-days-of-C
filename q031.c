// Write a program to take a number as input and print its equivalent binary representation.
/*#include<stdio.h>
#include<math.h>
int main() {
int num;
double x;
long double binary = 0; 
printf("enter the number whose binary you want :-");
scanf("%d",&num);
if (num <= 32767 && num >= -32768){
    if ( num >= 0){
    for(int i = 15;i >= 0;i--){
        x=pow(2,i);
        if(num / x == 1){
            binary = 10*binary + 1; 
            num = num - x;
            }
        else{
            binary = 10*binary;
            }
        }
    }
    else{
        num = -num -1;
    for(int i = 15;i >= 0;i--){
        x=pow(2,i);
        if(num / x == 1){
            binary = 10*binary + 1; 
            num = num - x;
            }
        else{
            binary = 10*binary;
            }
        }
        binary =1111111111111111 - binary;
    }
    printf("the binary number is %16le",binary);
}
else{
    printf("out of range");
}
}
*/
