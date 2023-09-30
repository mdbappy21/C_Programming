//Array Replacement I.
#include<stdio.h>
int main()
{
    int arr[10],i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<10;j++)
    {
        if(arr[j]<1)
            arr[j]=1;
        printf("X[%d] = %d\n",j,arr[j]);
    }
    return 0;
}
