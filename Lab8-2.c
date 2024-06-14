//Write a console program that calculates GCD of two integers.

#include <stdio.h>
int main(){
    int n, m, GCD=1;

    printf("Enter two integers: \n");
    scanf("%d %d", &n, &m);
    for (int i=1; i<=n && i<=m; i++){
        if ((n%i==0 && m%i==0)){
        GCD = i;
        }
    } 
    printf("GCD of %d and %d is: %d.", n, m, GCD);

}