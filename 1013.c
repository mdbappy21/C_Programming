#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);

    x=(a+b+abs(a-b))/2;
    x=(x+c+abs(x-c))/2;

    printf("%d eh o maior\n",x);
    return 0;
}

