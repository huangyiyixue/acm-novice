#include<stdio.h>
#include<math.h>
int main()
{
    long x;
    char c;
    scanf("%ld",&x);
    scanf(" %c",&c);
    long long money;
    if (x<=1000)
    {
        money=8;
        if (c=='y')
        {
            money=money+5;
        }
    }
    else
    {
        //整数除法是向下取整的，在传给ceil之前就已经被截断了
        money=8+ceil((x-1000)/500.0)*4;
        if (c=='y')
        {
            money=money+5;
        }
    }
    printf("%lld",money);
    return 0;
}