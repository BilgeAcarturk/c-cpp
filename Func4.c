#include <stdio.h>
int add(int, int);

int main(){
    int m=20, n=30, sum;
    sum=add(m, n);
    printf("Sum is %d", sum);
}
int add(int a, int b){
    return(a+b);
}