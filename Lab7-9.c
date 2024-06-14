//Write a console program that prints out if an integer is complete or not.

#include <stdio.h>
int main(){
  int num, sum=0;
  printf("Enter an integer: \n");
  scanf("%d", &num);
  for (int i=1; i<=num/2; i++)
    if (num % i == 0)
      sum += i;
  if (num == sum)
  printf("Entered integer, %d is complete.", num);
  else
  printf("Entered integer, %d is not complete.", num);

}