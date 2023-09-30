//next 6 odd number .
#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);

    if (a%2==0)
        a++;
    for (i=0; i<6; i++)
    {
        printf("%d\n",a);
        a=a+2;
    }

    return 0;
}
