#include <stdio.h>

int returnLength (char name[]){
    int length=0;
    int i;
    for (i=0; name[i]!='\0'; i++){
        length++;
    }
    return length;
}
int main(){
    char name[] = "BilgeAcartürk";
    printf("%d", returnLength(name));

    return 0;
}