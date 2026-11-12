#include<stdio.h>
int main()
{
    int x;
    long n;
    scanf("%d %ld",&x,&n);
    long sum=0;
    for (long i=0;i<n;i++)
    {
        int day=(x+i-1)%7+1;
        if (day==7||day==6)
        {
            continue;
        }
        else
        {
            sum+=250;
        }
    }
    printf("%ld",sum);
}