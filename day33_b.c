//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, j, key;

    
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[100]; 
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    
    for(i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];  
    }

    arr[i + 1] = key;  
    n++;  

    
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

