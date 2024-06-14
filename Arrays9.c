#include <stdio.h>
#include <string.h>

void swap(char array[]){
    int i, length, temp;
    length = strlen(array);
    for (i=0; i<length/2; i++){
        temp = array[i];
        array[i] = array[length-1-i];
        array[length-1-i] = temp;
    }
}
int main(){
    char text[200];
    scanf("%s", text);

    swap(text);
    printf("%s", text);
    return 0;
}