//snack read code and amount then print total pay.
#include<stdio.h>
int main()
{
    int code,amount;
    float pay;
    scanf("%d%d",&code,&amount);

    switch(code)
    {
    case 1:
        pay=amount*4;
        printf("Total: R$ %.2f\n",pay);
        break;

    case 2:
        pay=amount*4.50;
            printf("Total: R$ %.2f\n",pay);
        break;
    case 3:
        pay=amount*5.00;
        printf("Total: R$ %.2f\n",pay);
        break;
    case 4:
        pay=amount*2.00;
        printf("Total: R$ %.2f\n",pay);
        break;
    case 5:
        pay=amount*1.50;
        printf("Total: R$ %.2f\n",pay);
        break;

    }
    return 0;


}
