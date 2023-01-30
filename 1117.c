//Score Validation.
#include<stdio.h>
int main()
{
    int n=0,i,j,m=0;
    float a,b,avg;
    for(i=0; i<=n; i++)
    {
        scanf("%f",&a);
        if(a<0 || a>10)
        {
            printf("nota invalida\n");
            n++;
        }
    }
    for(j=0; j<=m; j++)
    {
        scanf("%f",&b);
        if(b<0 || b>10)
        {
            printf("nota invalida\n");
            m++;
        }
    }
    avg=(a+b)/2;
    printf("media = %.2f\n",avg);
    return 0;
}
