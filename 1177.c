//	Array Fill II.
#include<stdio.h>
int main()
{
    int a=0,i,j,n,array[1000];
    scanf("%d",&n);

    for (i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,a++);
        if(a==n)
            a=0;
    }


    return 0;
}
