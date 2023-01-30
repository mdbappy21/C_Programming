//Sequence IJ 2
#include<stdio.h>
int main()
{
    int a=1,b=7,i;
    for(i=0;i<5;i++)
    {
        printf("I=%d J=%d\n",a,b--);
        printf("I=%d J=%d\n",a,b--);
        printf("I=%d J=%d\n",a,b);
        a+=2;
        b+=4;

    }
}

