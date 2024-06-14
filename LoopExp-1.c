//Write a console program that counts down from 10 to 1, printing each number separated by commas. Afterward, it appends "GO!" to the output.

#include <stdio.h>
int main(){
    int n=10;
    for (; n>=1; n--){
        printf("%d, ", n);
    }
    printf("GO!");
}