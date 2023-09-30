//volume of a speare.
#include<stdio.h>
int main()
{
    double R,pi,V;
    scanf("%lf",&R);

    pi=3.14159;
    V=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",V);
    return 0;
}
