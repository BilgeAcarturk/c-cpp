#include <stdio.h>
int main(){
    int a;
    long b;
    long long c;
    double e;
    long double f;

    printf("The size of int is: %ld bytes. \n", sizeof(a));
    printf("The size of long is: %ld bytes. \n", sizeof(b));
    printf("The size of long long is: %ld bytes. \n", sizeof(c));
    printf("The size of double is: %ld bytes. \n", sizeof(e));
    printf("The size of long double is: %ld bytes.", sizeof(f));

}