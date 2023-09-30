//Array change I.
#include<stdio.h>
int main()
{
    int arr[20],i,j,k=19,n[20];
    for(i=0; i<20; i++)
    {
        scanf("%d",&arr[i]);
        n[i]=arr[i];
    }
    for(j=0; j<20; j++)
    {
        arr[j]=n[k];
        k--;
        printf("N[%d] = %d\n",j,arr[j]);
    }
    return 0;
}
