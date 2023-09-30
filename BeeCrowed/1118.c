//Several Scores with Validation.
#include<stdio.h>
int main()
{
    int e,n=0,i,j,m=0,c=0,d=0;
    float a,b,avg;
again:
    for(i=c; i<=n; i++)
    {
        scanf("%f",&a);
        if(a<0 || a>10)
        {
            printf("nota invalida\n");
            n++;
            c++;
        }
    }
    for(j=d; j<=m; j++)
    {
        scanf("%f",&b);
        if(b<0 || b>10)
        {
            printf("nota invalida\n");
            m++;
            d++;
        }
    }
    avg=(a+b)/2;
    printf("media = %.2f\n",avg);
again1:
    scanf("%d",&e);
    while(1)
    {
        if(e==2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            break;
        }
        else if(e==1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            goto again;
        }
        else
        {
            printf("novo calculo (1-sim 2-nao)\n");
            goto again1;
        }
    }
    return 0;
}
