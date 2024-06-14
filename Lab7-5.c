//Write a console program that prints out the swapped version of two integers.

#include <stdio.h>
int main(){
    int m, n;

    printf("Enter two integers: \n");
    scanf("%d %d", &m, &n);
    m = m + n;
    n = m - n;
    m = m - n;
    printf("The swapped version of two integers is: %d %d", m, n);
}