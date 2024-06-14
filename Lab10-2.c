#include <stdio.h>
void ShiftLeft(int arr[], const int n){
   int temp = arr[0];
   for(int i=0; i<n-1; i++)
      arr[i] = arr[i+1];
  arr[n-1] = temp;  
  printf("\nAfter shift: ");
  for(int i=0; i<n; i++)
    printf("%d   ", arr[i]);
}
int main() {
   const int n = 5;
   int arr[5] = {3, 5, 2, 7, 22};
  ShiftLeft(arr, n);
  return 0;
}
