//4. C program to input and print array elements using pointer.
#include <stdio.h>
int main() {
    int data[5];
    int i;

    printf("Enter elements: ");
    for ( i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: ");
    for ( i = 0; i < 5; ++i)
        printf("%d ", *(data + i));
    return 0;
}

