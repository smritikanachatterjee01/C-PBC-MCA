//6.C program to swap two arrays using pointers.
#include <stdio.h>

void swapArrays(int *array1, int *array2, int size) {
    int i;
    for (i = 0; i < size; i++) {
        int temp = *(array1 + i); 
        *(array1 + i) = *(array2 + i); 
        *(array2 + i) = temp;     
    }
}

int main() {
    int array1[5];      
    int array2[5];    
    int i;

   
    printf("Enter 5 integers for the first array:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array1[i]);
    }

   
    printf("Enter 5 integers for the second array:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array2[i]);
    }
 
    printf("\nBefore swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array1[i]);
    }
    printf("\nArray 2: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }
    
    swapArrays(array1, array2, 5);

    printf("\n\nAfter swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array1[i]);
    }
    
    printf("\nArray 2: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }

    printf("\n");

    return 0;
}




