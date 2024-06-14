#include <stdio.h>
#include <stdbool.h>
void Symmetric(int arr[], const int n){
   bool symmetric = true;
   for(int i=0; i<n/2; i++)
      if(arr[i] != arr[n-i-1])
         symmetric = false;
    if(symmetric == true)
       printf("Array is symmetric");
    else 
       printf("Array is assymmetric"); 
}
int main() {
   const int n = 5;
   int arr[] = {3, 5, 2, 5, 3};
  Symmetric(arr, n);
  return 0;
}
