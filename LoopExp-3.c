//Write a console program that prompts the user to enter the width and length of a rectangle and then prints a rectangle of asterisks ('*') based on the specified dimensions.

#include <stdio.h>
int main() {
  int m, n;
  printf("Enter the width and length of the rectangle: ");
  scanf("%d %d", &m, &n);

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++)
      printf("*");
    printf("\n");
  }

  return 0;
}