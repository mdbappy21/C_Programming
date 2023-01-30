//fuel spent in a trip.
#include<stdio.h>
int main()
{
    int T,V,D;
    float F;
    scanf("%d %d",&T,&V);

    D=V*T;//distance calculate
    F=D/12.00;

    printf("%.3f\n",F);
    return 0;
}
