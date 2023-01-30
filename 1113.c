//Ascending and Descending
#include<stdio.h>
int main()
{
    int a,b,i,n=0;
    for(i=0;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        if (a==b)
            break;
        else if(a<b)
            printf("Crescente\n");
        else if(a>b)
            printf("Decrescente\n");
        n++;
    }
    return 0;
}
