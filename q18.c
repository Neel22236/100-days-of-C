// Write a program to assign grades based on a percentage input.
#include<stdio.h>
int main(){
    float m;
    printf("");
    scanf("%f",&m);
    if ( m > 90 && m <= 100){
        printf("you got grade A")
    }
    else if ( m > 80 && m <= 90){
        printf("you got grade B")
    }
    else if ( m > 70 && m <= 80){
        printf("you got grade C")
    }
    else if ( m > 60 && m <= 70){
        printf("you got grade D")
    }
    else if ( m > 50 && m <= 60){
        printf("you got grade E")
    }
    else if ( m => 0 && m <= 50){
        printf("you got grade F")
    }
    else {
        printf("invalid marks")
    }
}