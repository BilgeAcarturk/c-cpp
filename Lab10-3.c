#include <stdio.h>

void ShiftRight(int arr[], const int n){
   int temp = arr[n-1];
   for(int i=n-1; i>0; i--)
      arr[i] = arr[i-1];
  arr[0] = temp;  
  printf("After shift: ");
  for(int i=0; i<n; i++)
    printf("%d ", arr[i]);
}
int main() {
   const int n = 5;
   int arr[5] = {3, 5, 2, 7, 22};
  ShiftRight(arr, n);
  return 0;
}