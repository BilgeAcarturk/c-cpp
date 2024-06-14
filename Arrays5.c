#include <stdio.h>
int main(){
    int matrix[3][5];
    int i, j;
    int sum=0;
      for (i=0; i<3; i++){
        for (j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
        }
      }
      for (i=0; i<3; i++){
        for (j=0; j<5; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
      }
      for (j=0; j<5; j++){
        for (i=0; i<3; i++){
            sum += matrix[i][j];
        }
        printf("%d ", sum);
        sum = 0;
      }
}
/*

int main(){
    int matrix[3][5];
    int i, j;
    int sum=0;
      for (i=0; i<3; i++){
        for (j=0; j<5; j++){
            scanf("%d", &matrix[i][j]);
        }
      }
      for (j=0; j<5; j++){
        for (i=0; i<3; i++){
            sum += matrix[i][j];
        }
        printf("%d ", sum);
      }
      sum = 0;
}

*/