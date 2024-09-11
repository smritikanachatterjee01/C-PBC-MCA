//9. C program to access two dimensional array using pointers.
#include <stdio.h>
void printArray(int *arr, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(arr + i * cols + j)); 
        }
        printf("\n");
    }
}


int main() {
    int rows = 3;
    int cols = 4;
    int matrix[3][4];  
    int i, j;

   
    printf("Enter the elements for a %dx%d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
 
    printf("\nMatrix:\n");
    printArray(&matrix[0][0], rows, cols);

    return 0;
}



