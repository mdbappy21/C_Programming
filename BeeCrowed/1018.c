//bank notes.
#include<stdio.h>
int main()
{
    int BN,a,b,c,d,e,f,g,n;

    scanf("%d",&n);

    a=n/100;
    BN=(n-a*100);
    b=BN/50;
    BN=(BN-b*50);
    c=BN/20;
    BN=(BN-c*20);
    d=BN/10;
    BN=(BN-d*10);
    e=BN/5;
    BN=(BN-e*5);
    f=BN/2;
    BN=(BN-f*2);
    g=BN/1;

    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);

    return 0;
}
