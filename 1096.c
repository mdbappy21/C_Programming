#include<stdio.h>
int main()
{
    int a=1,i;
    for(i=0;i<5;i++)
    {
        printf("I=%d J=7\n",a);
        printf("I=%d J=6\n",a);
        printf("I=%d J=5\n",a);
        a+=2;
    }
}
