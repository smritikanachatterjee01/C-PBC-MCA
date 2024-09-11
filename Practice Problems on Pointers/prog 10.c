// 10. C program to add two matrix and multiply two matrix using pointers.
#include <stdio.h>

#define ROWS 3
#define COLS 3


void matrixInput(int mat[][COLS])
{
    int i, j;


    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            
            scanf("%d", (*(mat + i) + j));
        }
    }
}

void matrixPrint(int mat[][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
           
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
void matrixmulti(int mat1[][COLS], int mat2[][COLS], int res[][COLS])
{
    int i, j;


  
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            
            *(*(res + i) + j) = *(*(mat1 + i) + j) * *(*(mat2 + i) + j);
        }
    }
}


int main()
{
    int mat1[ROWS][COLS], mat2[ROWS][COLS], res[ROWS][COLS];

    
    printf("Enter elements in first matrix of size %dx%d: \n", ROWS, COLS);
    matrixInput(mat1);

    
    printf("\nEnter elemetns in second matrix of size %dx%d: \n", ROWS, COLS);
    matrixInput(mat2);

   
    matrixmulti(mat1, mat2, res);

    printf("\nmultiplication of first and second matrix: \n");
    matrixPrint(res);
    

    return 0;
}






