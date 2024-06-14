#include <stdio.h>
int main(){
    unsigned short grade;
    
    printf("Enter grade: \n");
    scanf("%hd", &grade);

    if (grade > 100)
      printf("Invalid Input");
    else if (grade >= 92)
      printf("AA");
    else if (grade >= 84)
      printf("BA");
    else if (grade >= 76)
      printf("BB");
    else if (grade >= 68)
      printf("CB");
    else if (grade >= 60)
      printf("CC");
    else if (grade >= 50)
      printf("DC");
    else if (grade >= 40)
      printf("DD");
    else
      printf("F");

    
}