//	Experiments.
#include<stdio.h>
int main ()
{
    char ch;
    int frogs=0,rats=0,rabbits=0,t,a,i,n;
    float frog,rat,rabbit;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d %c",&a,&ch);
        if(ch=='c' || ch=='C')
            rabbits+=a;
        else if (ch=='r' || ch=='R')
            rats+=a;
        else if (ch=='s' || ch=='S')
            frogs+=a;

    }
    t=frogs+rats+rabbits;
    rabbit=(rabbits*100.0)/t;
    rat=(rats*100.0)/t;
    frog=(frogs*100.0)/t;
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",rabbits);
    printf("Total de ratos: %d\n",rats);
    printf("Total de sapos: %d\n",frogs);
    printf("Percentual de coelhos: %.2f %\n",rabbit);
    printf("Percentual de ratos: %.2f %\n",rat);
    printf("Percentual de sapos: %.2f %\n",frog);

    return 0;
}
