//Write a console program that generates a right-angled triangle of asterisks based on user input.

#include <stdio.h>
int main(){
    int n, i,j;
    printf("Enter an integer: \n");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for (j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}