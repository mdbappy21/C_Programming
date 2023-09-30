//Bhaskara's Formula...(-b+-sqrt(b*b-4*a*c))/(2*a)
#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,d,x1,x2;
    scanf("%f%f%f",&a,&b,&c);

    d=b*b-4*a*c;


    if (d>=0 && a!=0)
    {
        x1=(-b+sqrt (d))/(2*a);
        x2=(-b-sqrt (d))/(2*a);
        printf("R1 = %.5f\n",x1);
        printf("R2 = %.5f\n",x2);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}
