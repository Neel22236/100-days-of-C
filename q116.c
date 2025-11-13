//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>

int main() {
    int m, n;
    
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter elements of first sorted array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter elements of second sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    // Add remaining elements
    while (i < m)
        merged[k++] = nums1[i++];
    while (j < n)
        merged[k++] = nums2[j++];

    // Print merged sorted array
    printf("Merged sorted array:\n");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
