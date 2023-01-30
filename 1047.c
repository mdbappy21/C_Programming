//game time in hours and min
#include<stdio.h>
int main()
{
    int ih,im,fh,fm,gth,gtm;
    scanf("%d%d%d%d",&ih,&im,&fh,&fm);

    if (ih>fh)
    {
        if(im>fm)
        {
            gtm=fm+60-im;
            gth=fh+24-ih-1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }
        else if (im<fm)
        {
            gtm=fm-im;
            gth=fh+24-ih;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }
        else
        {
            gtm=0;
            gth=fh+24-ih;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }

    }

    else if (fh>ih)
    {
        if(im>fm)
        {
            gtm=fm+60-im;
            gth=fh-ih-1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }
        else if (im<fm)
        {
            gtm=fm-im;
            gth=fh-ih;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }
        else
        {
            gtm=0;
            gth=fh-ih;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }
    }
    else
        {
        if(im>fm)
        {
            gtm=fm+60-im;
            gth=23;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }
        else if (im<fm)
        {
            gtm=fm-im;
            gth=0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }
        else
        {
            gtm=0;
            gth=24;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",gth,gtm);
        }
        }
    return 0;
}
