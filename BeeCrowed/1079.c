//Weighted Averages.
#include<stdio.h>
int main()
{
    int i,n;
    float a,b,c,r;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        r=((a*2)+(b*3)+(c*5))/10;
        printf("%.1f\n",r);
    }
    return 0;
}
