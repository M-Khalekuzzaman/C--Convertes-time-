
#include<stdio.h>
int main()
{
    int seconds;
    printf("Enter your seconds :");
    scanf("%d",&seconds);
    printf("The time is :");

     int hour = (int)seconds/3600;
     printf("\n %d hour(s) ",hour);
     seconds = seconds - (hour*3600);

     int min = (int)seconds/60;
     printf("\n %d Minutie(s) ",min);
     seconds = seconds - (min*60);

        int sec = (int)seconds/1;
     printf("\n %d Second(s) ",sec);
     seconds = seconds - (sec*1);

     printf("\nH:M:S - %d:%d:%d",hour,min,sec);

     return 0;
}
