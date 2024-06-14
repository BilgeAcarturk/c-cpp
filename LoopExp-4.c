// Write a console program that generates a diamond pattern composed of ascending and descending sequences of numbers.

#include <stdio.h>
int main(){
  int n, j, i;
  printf("Enter the length and the width of rectangular: \n");
  scanf("%d", &n);
    for (i=1; i<=n; i++){
      for (j=1; j<=n-i; j++)
        printf(" ");
      for (j=1; j<=i; j++)
        printf("%d", j);
      for (j=i-1; j>=1; j--)
        printf("%d", j);
      printf("\n");
    }
    for (i=n-1; i>=1; i--){
      for (j=1; j<=n-i; j++)
        printf(" ");
      for (j=1; j<=i; j++)
        printf("%d", j);
      for (j=i-1; j>=1; j--)
        printf("%d", j);
      printf("\n");
    }
}