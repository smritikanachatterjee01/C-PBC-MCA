//5. C program to copy one array to another using pointers.
#include <stdio.h>


void copyArray(int *source, int *destination, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(destination + i) = *(source + i);}
}
int main() {
    int sourceArray[5];       
    int destinationArray[5];  
    int i;

    
    printf("Enter 5 integers for the source array:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i);
        scanf("%d", &sourceArray[i]);
    }

  
    copyArray(sourceArray, destinationArray, 5);

    
    printf("\nSource Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", sourceArray[i]);
    }

    printf("\nDestination Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", destinationArray[i]);
    }

    printf("\n");

    return 0;
}


