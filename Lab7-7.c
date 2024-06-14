//Write a console program that prints out the average value of entered float numbers.

#include <stdio.h>
int main(){
    int n, i=1;
    float num, sum=0, avg;

    printf("Enter an integer: \n");
    scanf("%d", &n);
    while (i <= n){
        printf("Enter a float value: \n");
        scanf("%f", &num);
        sum += num;
        i++;
    }
    avg = sum / n;
    printf("Average of the entered floats is: %f", avg);
}