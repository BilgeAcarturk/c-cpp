#include <stdio.h>
int mult(int matrix[], int size){
    int mult = 1;
    int i=0;
    for (; i<size; i++){
        mult *= matrix[i];
    }
    return mult;
}
int main(){
    int num[5] = {1,2,3,4,5};
    printf("%d", mult(num, 5));
    return 0;
}