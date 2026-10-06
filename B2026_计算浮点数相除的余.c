#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    int c=a/b;
    double r=a-c*b;
    printf("%f",r);
    return 0;
}