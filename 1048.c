//salary increasing ..
#include<stdio.h>
int main ()
{
    float s,ns,si;
    scanf("%f",&s);

    if(s>0&&s<=400)
    {
        si=(15*s/100);
        ns=s+si;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",si);
        printf("Em percentual: 15 %%\n");
    }
    else if(s>=400.01&&s<=800)
    {
      si=(12*s/100);
        ns=s+si;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",si);
        printf("Em percentual: 12 %%\n");
    }
    else if(s>=800.01&&s<=1200)
    {
        si=(10*s/100);
        ns=s+si;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",si);
        printf("Em percentual: 10 %%\n");
    }
    else if(s>=1200.01&&s<=2000)
    {
        si=(7*s/100);
        ns=s+si;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",si);
        printf("Em percentual: 7 %%\n");
    }
    else if(s>=2000.01)
    {
        si=(4*s/100);
        ns=s+si;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",si);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
