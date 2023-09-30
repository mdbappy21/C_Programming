//event time calculate.
#include<stdio.h>
int main()
{
    int tsi,tsl,ts,d,h,m,s,di,hi,mi,si,dl,hl,ml,sl;
    scanf("%*s %d",&di);
    scanf("%d %*s ",&hi);
    scanf("%d %*s ",&mi);
    scanf("%d",&si);
    scanf("%*s %d",&dl);
    scanf("%d %*s ",&hl);
    scanf("%d %*s ",&ml);
    scanf("%d",&sl);
    tsi=(di*86400)+(hi*3600)+(mi*60)+si;
    tsl=(dl*86400)+(hl*3600)+(ml*60)+sl;
    ts=tsl-tsi;
    d=ts/86400;
    ts=ts-(d*86400);
    h=ts/3600;
    ts=ts-(h*3600);
    m=ts/60;
    s=ts-(m*60);
    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);

    return 0;
}
