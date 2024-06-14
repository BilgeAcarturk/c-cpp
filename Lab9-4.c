#include <stdio.h>

int GCD (int m, int n){
  int veli;
    for (int i=1; i<=m && i<=n; i++){
      if ((n%i==0) && (m%i==0)){
        veli = i;
      }
    }
    return veli;
}

int main(){
int m, n, aleyna;
printf("Enter two integers: \n");
scanf("%d %d", &m, &n);
aleyna = GCD(m,n);
printf("\nThe GCD of %d and %d is %d", m, n, aleyna);
}