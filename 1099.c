//	Sum of Consecutive Odd Numbers.
#include<stdio.h>
int main()
{
    int n,a,b,i,j;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        int sum=0;
        if(a<b)
        {
            if(a%2!=0)
                a=a+1;
            if(b%2!=0)
                b=b-1;
            for(j=(a+1); j<b; j+=2)
                sum=sum+j;
        }
        else if(a>b)
        {
            if(a%2==0)
                a=a-1;
            else a=a-2;
            if(b%2==0)
                b=b+1;
            else
                b=b+2;
            for(j=b; j<=a; j+=2)
                sum+=j;
        }
            printf("%d\n",sum);

    }

    return 0;
}
