//Write a console program that calculates the average of the positive and negative float values separately and prints the results.

#include <stdio.h>
int main() 
{
    int n, countP = 0, countN = 0;
    float num, sumP = 0, sumN = 0, avgP, avgN;

    printf("Enter an integer:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter a float value:");
        scanf("%f", &num);

        if (num > 0)
        {
            sumP += num;
            countP++;
        }
        else if (num < 0)
        {
            sumN += num;
            countN++;
        }
    }

    if (countN > 0)
    {
        avgN = sumN / countN;
        printf("\nThe average of negative values is: %f", avgN);
    }
    else
    {
        printf("\nNo negative values entered.");
    }

    if (countP > 0)
    {
        avgP = sumP / countP;
        printf("\nThe average of positive values is: %f", avgP);
    }
    else
    {
        printf("\nNo positive values entered.");
    }

    return 0;
}