#include<stdio.h>
int main()
{
    int a,b,c;
    char ch1,ch2,ch3;
    scanf("%d %d %d",&a,&b,&c);
    scanf(" %c%c%c",&ch1,&ch2,&ch3);
    int min=a;
    if (b<=min)
    {
        min=b;
    }
    if (c<=min)
    {
        min=c;
    }
    int max=a;
    if (b>=max)
    {
        max=b;
    }
    if (c>=max)
    {
        max=c;
    }
    int mid=a+b+c-min-max;
    if (ch1<ch2&&ch2<ch3)
    {
        printf("%d %d %d",min,mid,max);
    }
    else if (ch1<ch3&&ch3<ch2)
    {
        printf("%d %d %d",min,max,mid);
    }
    else if (ch2<ch1&&ch1<ch3)
    {
        printf("%d %d %d",mid,min,max);
    }
    else if (ch3<ch1&&ch1<ch2)
    {
        printf("%d %d %d",mid,max,min);
    }
    else if (ch2<ch3&&ch3<ch1)
    {
        printf("%d %d %d",max,min,mid);
    }
    else
    {
        printf("%d %d %d",max,mid,min);
    }
    return 0;
}