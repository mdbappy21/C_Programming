//Array fill I.
#include<stdio.h>
int main()
{
    int arr[10],i,n;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        arr[i]=n;
        n*=2;
        printf("N[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
