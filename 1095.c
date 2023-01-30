//	Sequence IJ 1.
#include<stdio.h>
int main ()
{
    int a=1,b=60,i;
    for(i=0;i<13;i++)
    {
        printf("I=%d J=%d\n",a,b);
        a+=3;
        b-=5;
    }
    return 0;
}
