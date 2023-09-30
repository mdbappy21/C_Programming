//Consumption of a car distance/fule spent.
#include<stdio.h>
int main ()
{
    int total_d;
    float total_fs,C;

    scanf("%d %f",&total_d,&total_fs);

    C=total_d/total_fs;
    printf("%.3f km/l\n",C);

    return 0;

}
