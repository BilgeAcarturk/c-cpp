// Write a console program that prints the perimeter and the area of a rectangle with the lengths given by the user.

#include <stdio.h>
int main(){
  int width;
  int length;

  printf("Enter the length of the rectangular: \n");
  scanf("%d", &length);
  printf("Enter the width of the rectangular: \n");
  scanf("%d", &width);
  
  int area = width * length;
  int perimeter = 2 * (length + width);

  printf("The area of the rectangular is: %d \n", area);
  printf("The perimeter of the rectangular is: %d", perimeter);
  }