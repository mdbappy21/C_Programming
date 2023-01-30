#include<stdio.h>
int main()
{
    int code_p1,unit_p1;
    int code_p2,unit_p2;

    float price_p1,price_p2,total_payable;

    scanf("%d %d %f",&code_p1,&unit_p1,&price_p1);
    scanf("%d %d %f",&code_p2,&unit_p2,&price_p2);

    total_payable=(unit_p1*price_p1)+(unit_p2*price_p2);


    printf("VALOR A PAGAR: R$ %.2f",total_payable);

    return 0;
}
