#include<stdio.h>
int main ()
{
    double A,B,C,tri,cir,tra,qua,ret,pi;
    scanf("%lf %lf %lf",&A,&B,&C);

    pi=3.14159;
    tri=.5*A*C;
    cir=pi*C*C;
    tra=.5*(A+B)*C;
    qua=B*B;
    ret=A*B;

    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",qua);
    printf("RETANGULO: %.3lf\n",ret);
    return 0;
}
