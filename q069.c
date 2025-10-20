// Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>
int main(){
    int num;
    printf("enter how many numbers you want in array :- ");
    scanf("%d", &num);

    int arr[num];
    printf("enter the numbers of the array :- ");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    
    // make the array in ascending order
    int temp;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("the second largest number is %d", arr[num - 2]);
    return 0;
}
