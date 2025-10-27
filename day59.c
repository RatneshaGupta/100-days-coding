//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

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

   
    int sum = 0;
    for(int i = 0; i < k; i++)
        sum += arr[i];

    int maxSum = sum;

    
    for(int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i]; 
        if(sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
    return 0;
}
