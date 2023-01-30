#include<stdio.h>
int main()
{
    int E_NUMBER,W_P_M;
    float W_H_S,SALARY;
    scanf("%d %d %f",&E_NUMBER,&W_P_M,&W_H_S);

    SALARY=W_P_M*W_H_S;

    printf("NUMBER = %d\n",E_NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;


}
