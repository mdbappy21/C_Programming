//Ages.
#include<stdio.h>
int main()
{
    int a,b=0,n=0,i;
    float x;
    for(i=0; i<=n; i++)
    {
        scanf("%d",&a);
        if (a<0) break;
        b+=a;
        n++;
    }
    x=b*1.0/n;
    printf("%.2f\n",x);
    return 0;
}
