//	Sum of Consecutive Even Numbers.
#include<stdio.h>
int main()
{
    int i,n;
    while(1)
    {
        int sum=0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0; i<5; i++)
        {
            if (n%2!=0)
                n++;
            sum+=n;
            n+=2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
