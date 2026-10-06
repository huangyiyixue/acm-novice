#include<stdio.h>
#include<math.h>
int main()
{
    long Xa,Ya,Xb,Yb;
    scanf("%ld %ld",&Xa,&Ya);
    scanf("%ld %ld",&Xb,&Yb);
    double length=sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb));
    printf("%.3f",length);
    return 0;
}