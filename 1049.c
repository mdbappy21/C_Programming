//read three word ....print animal name animal.
#include<stdio.h>
int main ()
{
    char a[15],b[15],c[15];
    scanf("%s%s%s",a,b,c);

    if(a[0]=='v')
    {
        if(b[0]=='a')
        {
            if(c[0]=='c')
                printf("aguia\n");
            else if(c[0]=='o')
                printf("pomba\n");
        }
        else if(b[0]=='m')
        {
            if(c[0]=='o')
                printf("homem\n");
            else if(c[0]=='h')
                printf("vaca\n");
        }
    }
    else if(a[0]='i')
    {
       if(b[0]=='i')
        {
            if(c[2]=='m')
                printf("pulga\n");
            else if(c[2]=='r')
                printf("lagarta\n");
        }
        else if(b[0]=='a')
        {
            if(c[0]=='h')
                printf("sanguessuga\n");
            else if(c[0]=='o')
                printf("minhoca\n");
        }
    }
    return 0;
}
