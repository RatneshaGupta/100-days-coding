//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    
    for(i = 0; i < rows; i++) {
        int r = i, c = 0;
        while(r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
    }

    
    for(j = 1; j < cols; j++) {
        int r = rows - 1, c = j;
        while(r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
    }

    printf("\n");

    return 0;
}
