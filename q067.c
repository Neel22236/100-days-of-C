// Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int num, pos, new_element;

    printf("Enter how many numbers you want in the array: ");
    scanf("%d", &num);

    int arr[num + 1]; // +1 for the new element

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a new element to insert: ");
    scanf("%d", &new_element);

    printf("Enter the position (0-based index) where you want to insert it: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > num) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (int i = num; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = new_element;

    printf("Updated array:\n");
    for (int i = 0; i <= num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
