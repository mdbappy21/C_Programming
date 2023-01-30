//calculate perimeter of triangle if not possible calculate area of trapezium.
#include<stdio.h>
int main()
{
    float a,b,c,area,per;
    scanf("%f%f%f",&a,&b,&c);

    per=a+b+c;
    area=(a+b)*c*.5;

    if (a>b && a>c)
    {
        if(b+c>a)
            printf("Perimetro = %.1f\n",per);
        else
            printf("Area = %.1f\n",area);
    }
    else if (b>c && b>a)
    {
        if(a+c>b)
            printf("Perimetro = %.1f\n",per);
        else
            printf("Area = %.1f\n",area);

    }
    else
    {
        if(a+b>c)
            printf("Perimetro = %.1f\n",per);
        else
            printf("Area = %.1f\n",area);

    }
    return 0;
}
