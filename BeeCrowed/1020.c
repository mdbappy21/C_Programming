//Read days and show year,month,days.
#include<stdio.h>
int main ()
{
    int days,year,month;
    scanf("%d",&days);

    year=days/365;
    days=days-year*365;
    month=days/30;
    days=days-month*30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);

    return 0;
}
