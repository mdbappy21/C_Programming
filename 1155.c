//S Sequence.
#include<stdio.h>
int main()
{
    int i;
    float b,s=0;
    for(i=1;i<=100;i++)
    {
        b=1.0/i;
        s+=b;
    }
    printf("%.2f\n",s);
    return 0;
}
