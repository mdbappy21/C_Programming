//	Sum of Consecutive Odd Numbers III.
#include<stdio.h>
int main()
{    int n,x,y,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int sum=0;
        scanf("%d %d",&x,&y);
        for(j=1; j<=y; j++)
        {
            if(x%2==0)
                x++;
            sum+=x;
            x+=2;
        }
        printf("%d\n",sum);
    }


    return 0;
}
