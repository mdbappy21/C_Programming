//Array Selection I.
#include<stdio.h>
int main()
{
    int i,j,k,l;
    float arr[100];
    for(i=0;i<100;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(j=0;j<100;j++)
    {
        if(arr[j]<=10)
         printf("A[%d] = %.1f\n",j,arr[j]);
    }
    return 0;
}
