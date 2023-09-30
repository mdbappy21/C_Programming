//	Simple Factorial.
#include <stdio.h>
int main()
{
    int n,a=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a*=i;
    }
    printf("%d\n",a);

  return 0;
}
