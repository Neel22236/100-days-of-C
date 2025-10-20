// Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include<stdio.h>
int main(){
    int num, pos;

    printf("enter how many numbers you want in array :- ");
    scanf("%d", &num);

    int arr[num];
    printf("enter the numbers of the array :- ");
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }

    printf("enter the position (0-based index) of the element you want to delete :- ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= num){
        printf("invalid position!\n");
        return 0;
    }

    for(int i = pos; i < num - 1; i++){
        arr[i] = arr[i + 1];
    }

    printf("updated array :- ");
    for(int i = 0; i < num - 1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}