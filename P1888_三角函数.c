#include<stdio.h>
long gcd (int a,int b)
{
    if (b==0)
    {
        return a;
    }
    else 
    {
        return gcd(b,a%b);
    }
}
int main()
{
    long  a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    long max=a;
    if (b>=max)
    {
        max=b;
    }
    if (c>=max)
    {
        max=c;
    }
    long min=a;
    if (b<=min)
    {
        min=b;
    }
    if (c<=min)
    {
        min=c;
    }
    long mid=a+b+c-max-min;
    long res=gcd(min,max);
    printf("%ld/%ld",min/res,max/res);
    return 0;
}