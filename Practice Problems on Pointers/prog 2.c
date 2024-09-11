//2.  C program to add two numbers using pointers.
#include <stdio.h>  
  
int main() {  
    int num1, num2 ;
    int *ptr1 = &num1;  
    int *ptr2 = &num2;  
    int sum; 
	printf("Enter the first number");  
	scanf ("%d",&num1);
    printf("Enter the second number");
	scanf ("%d",&num2);  
  
    sum = *ptr1 + *ptr2;  
  
    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);  
  
    return 0;  
} 
