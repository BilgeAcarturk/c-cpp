//Write a console program that prints out the even numbers until an integer.

#include <stdio.h>
int main(){
int n, num;
printf("Enter an integer: \n");
scanf("%d", &num);
for (n=0; n <= num; n+=2){
    if (n % 2==0)
    printf("\n%d", n);
}

}