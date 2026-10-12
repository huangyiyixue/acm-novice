#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    double p=0.5*(a+b+c);
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1f",s);
    return 0;

}