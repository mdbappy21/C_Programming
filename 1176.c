//Fibonacci Array.
#include<stdio.h>
int main()
{
    long long int arr[60];
    int i,j,n,m;
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;
    for(i=2; i<=60; i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    for(j=0; j<n; j++)
    {
        scanf("%d",&m);
        printf("Fib(%d) = %lld\n",m,arr[m]);
    }
    return 0;
}
