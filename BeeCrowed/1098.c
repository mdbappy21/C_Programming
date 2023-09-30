//Sequence IJ 4
#include<stdio.h>
int main()
{
    int i;
    float a=0,b=1;
    for(i=0; i<11; i++)
    {


        if(a>0&&a<1 || a>1&&a<2)
        {
            printf("I=%.1f J=%.1f\n",a,b++);
            printf("I=%.1f J=%.1f\n",a,b++);
            printf("I=%.1f J=%.1f\n",a,b);
        }
        else
        {
            printf("I=%.f J=%.f\n",a,b++);
            printf("I=%.f J=%.f\n",a,b++);
            printf("I=%.f J=%.f\n",a,b);
        }
        a=a+0.2;
        b=b-1.8;
    }

    return 0;
}


