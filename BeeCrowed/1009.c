#include<stdio.h>
int main ()

{
    char s_name [20];
    double f_salary,t_sell,extra,total_salary;

    scanf("%s",&s_name);
    scanf("%lf %lf",&f_salary,&t_sell);

    extra=(t_sell*15)/100;
    total_salary=f_salary+extra;
    printf("TOTAL = R$ %.2lf\n",total_salary);

    return 0;

}
