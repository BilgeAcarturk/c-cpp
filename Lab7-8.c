//Write a console program that calculates the average of entered float values with a do-while loop.

#include <stdio.h>
int main(){
    int n, i=1;
    float num, sum=0, avg;

    printf("Enter an integer: \n");
    scanf("%d", &n);
    do {
        printf("Enter a float value: \n");
        scanf("%f", &num);
        sum += num;
        i++;
    } while (i <= n);
    avg = sum / n;
    printf("Average of the entered floats is: %f", avg);
}