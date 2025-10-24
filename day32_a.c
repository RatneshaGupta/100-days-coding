//Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2, n3, i, j;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2];
    n3 = n1 + n2;
    int merged[n3];  

    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    printf("Merged array:\n");
    for(i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}
