#include<stdio.h>
int main()
{
    double r;
    scanf("%lf",&r);
    double d=r*2;
    double c=d*3.14159;
    double s=3.14159*r*r;
    printf("%.4f %.4f %.4f",d,c,s);
    return 0;
}