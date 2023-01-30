//distance between two point.
#include<stdio.h>
#include<math.h>

int main()
{
    double x,y,x1,x2,y1,y2,D;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    D=sqrt(pow((x1-x2),2)+pow((y1-y2),2));

    printf("%.4lf\n",D);
    return 0;
}
