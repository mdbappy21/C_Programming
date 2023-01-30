//Exceeding Z.
#include<stdio.h>
int main()
{
    int a,b,c=1,i,n=0;
    scanf("%d%d",&a,&b);
    while(a>=b)
        scanf("%d",&b);
    for(i=a; i<=b; i++)
    {
        n+=i;
        if(n>b)break;
        c++;
    }
    printf("%d\n",c);
    return 0;
}
