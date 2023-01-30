//	Quadrant.
#include<stdio.h>
int main()
{
    int a,b,n=1,i;
    for (i=0; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        if (a==0 || b==0)
            break;
        else if(a>0 && b>0)
            printf("primeiro\n");
        else if (a>0 && b<0)
            printf("quarto\n");
        else if (a<0 && b<0)
            printf("terceiro\n");
        else if (a<0 && b>0)
            printf("segundo\n");
        n++;
    }
    return 0;
}
