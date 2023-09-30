//	Dividing X by Y.
#include<stdio.h>
int main()
{
    int a,b,i,n;
    float result;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        if(b==0)
            printf("divisao impossivel\n");
        else
        {
            result=(a*1.0)/b;
            printf("%.1f\n",result);
        }
    }
    return 0;
}
