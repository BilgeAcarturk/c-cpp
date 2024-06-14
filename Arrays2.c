#include <stdio.h>
int main(){
    float num[5];
    int i;
      for (i=0; i < 5; i++){
      printf("Enter a number: \n");
      scanf("%f", &num[i]);
}
float sum = 0.0;
  for (i=0; i < 5; i++){
    sum += num[i];
  }
  printf("Average is: %.2f", sum/5);
}