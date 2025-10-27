//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if(k > n) {
        printf("Invalid input: k cannot be greater than array size.\n");
        return 0;
    }

    printf("Maximum elements in each subarray of size %d: ", k);

    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
