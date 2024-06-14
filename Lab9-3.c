#include <stdio.h>

void swap3(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
    printf("\nThe variables inside swap3 are %d %d %d.", *a, *b, *c);
}

int main() {
    int a, b, c;
    printf("Enter three integers:");
    scanf("%d%d%d", &a, &b, &c);
    swap3(&a, &b, &c);
    printf("\nThe interchanged variables inside main are %d %d %d.", a, b, c);

    return 0;
}
