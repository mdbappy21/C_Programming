//	Fixed Password.
#include<stdio.h>
int main()
{
    int a,i,n=0;
    for(i=0; i<=n; i++)
    {
        scanf("%d",&a);
        if(a==2002)
            printf("Acesso Permitido\n");
        else
        {
            printf("Senha Invalida\n");
            n++;
        }
    }
    return 0;
}
