//Summing Consecutive Integers.
#include<stdio.h>
int main()
{
    int a,n,m=0,i,j,sum=0;
    scanf("%d%d",&a,&n);
    for(j=0; j<=m; j++)
    {
        if(n<0 || n==0)
        {
            scanf("%d",&n);
            m++;
        }
    }
    for(i=0; i<n; i++)
    {
        sum+=a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}
