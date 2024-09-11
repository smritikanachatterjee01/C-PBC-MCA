// 7. C program to reverse an array using pointers.
#include <stdio.h>

void PrintArray(int *arr, int n){
  int *ptr = &arr[0];
  int i;

  for ( i = 0; i<n; i++){
    printf("Element %d is %d\n",i,*(ptr+i));
  }
}


void reverse(int *arr, int n){
  int *ptr = &arr[0]; 
  
  int *ptr2 = &arr[n-1]; 
 
  int temp;
  int i;
  for ( i=0; i<(n/2); i++){
    
    temp = *(ptr+i);
    arr[i] = *(ptr2-i);
    arr[n-i-1] = temp;

  }
}


int main(){
  int arr[5];
  int i;
  printf("Array before reverse:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

  reverse(arr,5);
  printf("Array after reverse\n");
  PrintArray(arr,5);

  return 0;
}
