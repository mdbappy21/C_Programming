//input seconds and show hours:minutes:seconds
#include<stdio.h>
int main ()
{
    int sec,hour,min;
    scanf("%d",&sec);
    hour=sec/3600;
    sec=sec-hour*3600;
    min=sec/60;
    sec=sec-min*60;
    printf("%d:%d:%d\n",hour,min,sec);
    return 0;
}
