//Write a console program that prints out digits of an entered integer.

#include <stdio.h>
int main(){
    int num, digit;

    printf("Enter an integer: \n");
    scanf("%d", &num);
    while (num != 0){
        
        digit = num % 10;
        printf("\n%d", digit);
        num = num / 10;
    
    }
}