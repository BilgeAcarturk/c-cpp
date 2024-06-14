#include <stdio.h>

int isPrime(int num){
    for (int i=2; i < num; i++){
      if (num % i==0){
        return 0;
      }
    }
    return 1;
}

int main(){
  int n;
  printf("Enter an integer: \n");
  scanf("%d", &n);
    if (isPrime(n) == 0){
        printf("Not a prime number.");
    } else {
        printf("A prime number.");
    }
    return 0;
}