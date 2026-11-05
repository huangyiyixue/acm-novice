#include<stdio.h>
int main()
{
    long long x;
    scanf("%lld",&x);
    char a,b;
    scanf(" %c%c",&a,&b);
    //折扣只与B C相关
    int hasB=(a=='B')||(b=='B');
    int hasC=(a=='C')||(b=='C');
    long long money;
    if ((hasB==1)&&(hasC==1))
    {
        money=x*6/10;
    }
    else if (hasB==1)
    {
        money=x*8/10;
    }
    else if (hasC==1)
    {
        money=x*7/10;
    }
    else
    {
        money=x;
    }
    printf("%lld",money);
    return 0;
}