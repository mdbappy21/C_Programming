//Type of fuel.
#include<stdio.h>
int main()
{
    int a=0,g=0,d=0,i,n=0,m;
    for(i=0; i<=n; i++)
    {
        scanf("%d",&m);
        if (m>0 && m<=4)
        {
            if(m==4)
                break;
            else if(m==1)
                a++;
            else if (m==2)
                g++;
            else
                d++;
            n++;
        }
        else
            n++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;
}
