//Prime Number.
#include<stdio.h>
int main()
{
    int a,n,i,j,count;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        count=1;
        scanf("%d",&a);

        for(j=2; j<a; j++)
        {
            if(a%j==0)
            {
                printf("%d nao eh primo\n",a);
                count=0;
                break;
            }
        }
        if(count==1)
            printf("%d eh primo\n",a);
    }
    return 0;
}
