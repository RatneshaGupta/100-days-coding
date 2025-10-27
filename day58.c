//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    
    int prefix[n];
    prefix[0] = 1;
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i-1] * nums[i-1];

    
    int suffix = 1;
    for(int i = n-1; i >= 0; i--) {
        answer[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }

    
    printf("Product array: ");
    for(int i = 0; i < n; i++) {
        if(i != n-1)
            printf("%d, ", answer[i]);
        else
            printf("%d", answer[i]);
    }
    printf("\n");

    return 0;
}
