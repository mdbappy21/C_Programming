// avg 3 input 4 number and calculate pass,retake,fail.
#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,n5,avg,avg1;
    scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
    n1=n1*2;
    n2=n2*3;
    n3=n3*4;
    n4=n4*1;

    avg=(n1+n2+n3+n4)/10;

    printf("Media: %.1f\n",avg);
    if (avg>=7)
        printf("Aluno aprovado.\n");
    else if (avg<5)
        printf("Aluno reprovado.\n");
    else if ("avg>=5 && avg<=6.9")

    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",n5);

        avg1=(avg+n5)/2;

        if (avg1>=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n",avg1);
    }
    return 0;
}
