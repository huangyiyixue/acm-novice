#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    double result=(double)a/b;
    printf("%.9f",result);
    return 0;
}