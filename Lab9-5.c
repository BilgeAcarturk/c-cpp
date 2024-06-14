#include <stdio.h>

float AVG(int n)
{
  float sum = 0;
    for(int i = 1 ;i <= n; i++ )
       sum += i;
  return sum / n;
}

int main()
 { 
    int n;
  float output;  
    printf("Enter an integer:");
  scanf("%d",&n); 
  output = AVG(n);
    printf("\nThe AVG of %d numbers is %f.", n,output); 
 }
