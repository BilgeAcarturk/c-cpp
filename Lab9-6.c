#include <stdio.h>

int findmax(int n)
 {
   int num, i = 1, max;
    printf("Enter a integer value:");
  scanf("%d",&num);
  max = num;
    while(i < n)
  {
    printf("Enter a integer value:");
    scanf("%d",&num);
    if(num > max)
       max = num;
    i++;
  }
  return max; 
 }
 
 int main()
 { 
    int n, max;  
    printf("Enter an integer:");
  scanf("%d",&n);
    max = findmax(n);
    printf("The maximum of %d numbers is: %d", n, max); 
 }