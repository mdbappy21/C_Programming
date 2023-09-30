//Even Square
#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,n;
    scanf("%d",&a);
    if (a%2!=0)a--;
    for (i=2;i<=a;i=i+2)
    {
        n=pow(i,2);
        printf("%d^2 = %d\n",i,n);
    }
    return 0;
}

