//game time calculate.
#include<stdio.h>
int main()
{
    int s,e,t;
    scanf("%d%d",&s,&e);
    if(s>e)
    {
        t=24-s+e;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if (e>s)
    {
        t=e-s;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else
    {
        t=24;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    return 0;
}
