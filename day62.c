//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for(int i = 1; i < n; i++) {
        
        if(maxEndingHere + arr[i] > arr[i])
            maxEndingHere = maxEndingHere + arr[i];
        else
            maxEndingHere = arr[i];

        
        if(maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    printf("Maximum subarray sum: %d\n", maxSoFar);
    return 0;
}
