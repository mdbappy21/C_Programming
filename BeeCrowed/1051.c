//taxs of a states people.
#include<stdio.h>
int main()
{
    double salary,tax,a,b;
    scanf("%lf",&salary);

    if(salary>=0 && salary<=2000)
    {
        printf("Isento\n");
    }
    else if (salary>2000 && salary<=3000)
    {
        salary=salary-2000;
        tax=salary*8/100;
        printf("R$ %.2lf\n",tax);
    }
    else if (salary>3000 && salary<=4500)
    {
        salary=salary-2000;
        a=salary-1000;
        b=a*18/100;
        tax=(10*8)+b;
        printf("R$ %.2lf\n",tax);
    }
    else if (salary>4500)
    {
        salary=salary-2000;
        a=salary-2500;
        b=a*28/100;
        tax=((10*8)+(15*18))+b;
        printf("R$ %.2lf\n",tax);
    }

    return 0;
}
