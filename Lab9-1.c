//Write a console program that prompts the user to enter an integer, calculates the average of numbers from 1 to the entered integer, and prints the result.

#include <stdio.h>
float avg(int n){
    float sum = 0;
      for (int i=1; i<=n; i++){
        sum += (float)i;
      }
    return sum/n;
}
int main(){
    int n;
    float output;

    printf("Enter an integer: \n");
    scanf("%d", &n);

    output = avg(n);
    printf("Average of %d numbers is %f", n, output);

 return 0;
}