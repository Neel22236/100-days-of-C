// Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int main(){
    int num, k;

    printf("enter how many numbers you want in array :- ");
    scanf("%d", &num);

    int arr[num];
    printf("enter the numbers of the array :- ");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    printf("enter how many positions you want to rotate the array :- ");
    scanf("%d", &k);

    k = k % num; // handle if k > num

    int rotated[num];

    for(int i = 0; i < num; i++){
        rotated[(i + k) % num] = arr[i];
    }

    printf("rotated array :- ");
    for(int i = 0; i < num; i++){
        printf("%d ", rotated[i]);
    }

    return 0;
}
