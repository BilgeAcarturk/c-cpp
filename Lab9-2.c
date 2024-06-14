#include <stdio.h>
void swap (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
void swap2 (int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main(){
  int ali, veli;

  printf("Enter two integer: \n");
  scanf("%d %d", &ali, &veli);

  printf("\nThe value of ali and veli before calling swap: %d and %d", ali, veli);
  
  swap(&ali, &veli);
  printf("\nThe value of ali and veli after calling swap: %d and %d", ali, veli);

  swap2(&ali, &veli);
  printf("\nThe value of ali and veli after calling swap2: %d and %d", ali, veli);

  return 0;
}