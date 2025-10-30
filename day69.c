//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (only one element is repeated):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = (n - 1) * (n - 2) / 2;
    int actualSum = 0;

    for(int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int repeated = actualSum - expectedSum;

    printf("The repeated element is: %d\n", repeated);

    return 0;
}
