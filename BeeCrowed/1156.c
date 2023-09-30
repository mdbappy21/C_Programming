//S Sequence II.
#include<stdio.h>
int main()
{
    int i,e=1;
    float s=1,x;

    for(i=3; i<=39; i+=2)
    {
            e*=2;
            x=i*1.0/e;
            s+=x;

    }
     printf("%.2f\n",s);
    return 0;
}
