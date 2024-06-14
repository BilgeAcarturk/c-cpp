#include <stdio.h>

int factorial(int num){
  int fact = 1;
  for (; num > 0; num--){
    fact *= num;
  }
  return fact;
}

int main(){
  int n;
  printf("Enter an integer: \n");
  scanf("%d", &n);
  printf("Factorial: %d", factorial(n));
}