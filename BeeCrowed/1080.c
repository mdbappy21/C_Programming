//Highest and Position
#include<stdio.h>
int main()
{
    int a,i,p,n=0;
    for (i=1; i<=100; i++)
    {
        scanf("%d",&a);
        if (a>n)
        {
            n=a;
            p=i;
        }
    }
    printf("%d\n%d\n",n,p);
    return 0;
}
