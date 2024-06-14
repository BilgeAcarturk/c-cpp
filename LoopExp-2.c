//Write a console program that generates a pattern of numbers in the shape of a pyramid with numbers increasing on each row and then decreasing.

#include <stdio.h>

int main(){
    int n, i, j;
    printf("Enter an integer: \n");
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
}