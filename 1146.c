//Growing Sequences.
#include<stdio.h>
int main()
{
    int a,n=0,i,b,j;
    for(i=0; i<=n; i++)
    {
        scanf("%d",&a);
        if(a==0)
            break;

        for(j=1; j<a; j++)
        {
            printf("%d ",j);
        }
        printf("%d\n",a);
        n++;
    }
    return 0;
}
