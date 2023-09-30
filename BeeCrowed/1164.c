//Perfect Number.
#include<stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int sum=0;
        scanf("%d",&a);
        for(j=1;j<a;j++)
        {
            if(a%j==0)
            {
               sum+=j;
            }
        }
        if(sum==a)
            printf("%d eh perfeito\n",a);
        else
            printf("%d nao eh perfeito\n",a);
    }
}
