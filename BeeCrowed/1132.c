//	Multiples of 13.
#include<stdio.h>
int main()
{
    int a,b,i,t,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for(i=a; i<=b; i++)
    {
        if(i%13!=0)
            sum=(sum+i);
    }
    printf("%d\n",sum);
    return 0;
}
