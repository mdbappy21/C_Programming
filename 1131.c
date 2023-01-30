//Grenais.
#include<stdio.h>
int main()
{
    int a,b,i,n=1,c,d=0,e=0,f=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        if(a==b)
            d++;
        else if(a>b)
            e++;
        else if(a<b)
            f++;
            printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&c);
        if(c==1)
            n++;
        else if(c==2)
            break;
    }
    printf("%d grenais\n",n);
    printf("Inter:%d\n",e);
    printf("Gremio:%d\n",f);
    printf("Empates:%d\n",d);
    if(e>f)
        printf("Inter venceu mais\n");
    else if(e<f)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");

    return 0;
}
