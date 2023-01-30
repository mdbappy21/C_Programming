//Positives and Average
#include<stdio.h>
int main()
{
    int p;
    float n,avg,m;
    for (int i=0;i<6;i++)
    {
        scanf("%f",&n);
        if (n>=0)
        {
            p++;
            m+=n;
        }
    }
    avg=m/p;
    printf("%d valores positivos\n",p);
    printf("%.1f\n",avg);
    return 0;
}
/*2nd way.
#include<stdio.h>
int main()
{
    float n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,a,b,c,d,e,f,avg;
    int positive=0;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    if(a>=0)
    {
        positive++;
        n1=a;
    }
    if(b>=0)
    {
        positive++;
        n2=b;
    }
    if(c>=0)
    {
        positive++;
        n3=c;
    }
    if(d>=0)
    {
        positive++;
        n4=d;
    }
    if(e>=0)
    {
        positive++;
        n5=e;
    }
    if(f>=0)
    {
        positive++;
        n6=f;
    }
    printf("%d valores positivos\n",positive);
    avg=(n1+n2+n3+n4+n5+n6)/positive;
    printf("%.1f\n",avg);

    return 0;
}*/
