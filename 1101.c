//Sequence of Numbers and Sum.
#include<stdio.h>
int main()
{
    int a,b,c,temp,i,n=0,sum=0;
    for(i=0; i<=n; i++)
    {
        scanf("%d%d",&a,&b);

        if(a<=0 || b<=0)
            break;
        else if (a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for (c=a; c<=b; c++)
        {
            printf("%d ",c);
            sum+=c;
        }
        printf("Sum=%d\n",sum);
        sum=0;
        n++;

    }
    return 0;
}
