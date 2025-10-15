//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    printf("Number of positive elements: %d\n", posCount);
    printf("Number of negative elements: %d\n", negCount);
    printf("Number of zero elements: %d\n", zeroCount);

    return 0;
}
