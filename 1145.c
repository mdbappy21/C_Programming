//Logical Sequence 2.
#include<stdio.h>
int main()
{
    int a,b,c=1,d=0,n,i,j;
    scanf("%d%d",&a,&b);
    n=b/a;
    for(i=1; i<=n; i++)
    {
        printf("%d",c);

        for(j=1; j<a; j++)
        {
            d=c+1;
            c++;
            printf(" %d",d);
        }
        printf("\n");
        c=c+1;
    }

    return 0;
}
