//	Squared and Cubic.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i;
        b=i*i;
        c=i*i*i;
    printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
