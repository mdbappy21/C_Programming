//lowest possible banknotes and coins calculate.
#include<stdio.h>
int main()
{
    double N;
    int a,n,BN,n100,n50,n20,n10,n5,n2,c10,c5,c25,c1,c05,c01;

    scanf("%lf",&N);

    a=N;
    BN=a;
    n100=BN/100;
    BN=BN-n100*100;
    n50=BN/50;
    BN=BN-n50*50;
    n20=BN/20;
    BN=BN-n20*20;
    n10=BN/10;
    BN=BN-n10*10;
    n5=BN/5;
    BN=BN-n5*5;
    n2=BN/2;
    BN=BN-n2*2;
    c10=BN/1;
    BN=BN-c10;

    n=(N-a)*100;
    c5=n/50;
    n=n-(c5*50);
    c25=n/25;
    n=n-(c25*25);
    c1=n/10;
    n=n-(c1*10);
    c05=n/5;
    n=n-(c05*5);
    c01=n/1;
    n=n-(c01*1);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",c10);
    printf("%d moeda(s) de R$ 0.50\n",c5);
    printf("%d moeda(s) de R$ 0.25\n",c25);
    printf("%d moeda(s) de R$ 0.10\n",c1);
    printf("%d moeda(s) de R$ 0.05\n",c05);
    printf("%d moeda(s) de R$ 0.01\n",c01);


    return 0;

}
