//count positive number .
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,n=0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

    if(a>=0)
        n++;
    if(b>=0)
        n++;
    if(c>=0)
        n++;
    if(d>=0)
        n++;
    if(e>=0)
        n++;
    if(f>=0)
        n++;
    printf("%d valores positivos\n",n);

    return 0;
}
