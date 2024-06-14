//Write a console program that calculates hours, minutes and seconds of an amount entered seconds.S

#include <stdio.h>
int main(){
    int InSecs;
    
    printf("Enter the amount of seconds: \n");
    scanf("%d", &InSecs);

    int hours = InSecs/3600;
    int minutes = (InSecs - (hours*3600)) / 60;
    int seconds = InSecs - (hours*3600) - (minutes*60);

    printf("%d hour(s), %d minute(s), %d second(s)", hours, minutes, seconds);
}