#include <stdio.h>

void printOddEven(int arr[], const int n) {
    int oddsum = 0, evensum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evensum += arr[i];
        } else {
            oddsum += arr[i];
        }
    }
    printf("Sum of even numbers: %d\n", evensum);
    printf("Sum of odd numbers: %d\n", oddsum);
}
int main() {
    const int n = 5;
    int arr[5] = {3, 5, 2, 7, 22};

    printOddEven(arr, n);

    return 0;
}