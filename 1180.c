//Lowest Number and Position.
#include<stdio.h>
int main()
{
    int N[1000],i,p=0,n,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    s=N[0];
    for(i=1;i<n;i++)
    {
        if(s>N[i])
        {s=N[i];
        p=i;
        }
    }
    printf("Menor valor: %d\n",s);
printf("Posicao: %d\n",p);
return 0;
}
