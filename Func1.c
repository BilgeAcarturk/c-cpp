#include <stdio.h>

void enterError (int error){
  printf("Error code: %d", error);
}

int main(){
  int num;
  printf("Enter a nonnegative number: \n");
  scanf("%d", &num);
  if (num < 0){
    enterError(404);
  } else {
    printf("Congrats!");
  }
  return 0;
}