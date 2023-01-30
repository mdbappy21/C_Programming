//Triangle Types.
#include<stdio.h>
int main()
{
    double a,b,c,A,B,C;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a>b&&a>c)
    {
        if (b>c)
        {
            A=a;
            B=b;
            C=c;
        }
        else
        {
            A=a;
            B=c;
            C=b;
        }
    }
    else if (b>c&&b>a)
    {
        if(a>c)
        {
            A=b;
            B=a;
            C=c;
        }
        else
        {
            A=b;
            B=c;
            C=a;
        }
    }
    else
    {
        if (a>b)
        {
            A=c;
            B=a;
            C=b;
        }
        else
        {
            A=c;
            B=b;
            C=a;
        }
    }
    if(A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (A*A==(B*B+C*C))
    {
        printf("TRIANGULO RETANGULO\n");

    }
    else if (A*A>(B*B+C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A*A<(B*B+C*C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }


    if(A==B&&B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    else if(A==B||B==C||C==A)
    {
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
