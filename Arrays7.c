#include <stdio.h>

void print(int matrix[][4], int size){
    int i, j;
    for (i=0; i<size; i++){
        for (j=0; j<4; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int matrix[3][4];
    int i, j;
    printf("Enter matrix: ");
      for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            scanf("%d", &matrix[i][j]);
        }
      }
      printf(matrix, 3);
}