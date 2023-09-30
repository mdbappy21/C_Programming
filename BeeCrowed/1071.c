//Sum of Consecutive Odd Numbers.
#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        a--;b++;
        if (a%2==0)
        a--;
        if (b%2==0)
        b++;
        for (i=b; i<=a; i+=2)
            sum=sum+i;
    }
    else if (b>a)
    {
        a++;b--;
        if (a%2==0)
            a++;
        if (b%2==0)
            b--;
        for (i=a; i<=b; i+=2)
            sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
