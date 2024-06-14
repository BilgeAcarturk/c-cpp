#include <stdio.h>
/* int main(){
    char name[]="Bilge";
    printf("%c", name[3]);
} 



int main(){
    int matris[3][3] = {{2,4,6}, {1,3,5}, {7,8,9}};
      printf("%d", matris[2][2]);

return 0;
}



*/

int main(){
    int matrix[3][3] =  {{1,2,3}, {4,5,6}, {7,8,9}};
    int i, j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}