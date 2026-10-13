#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int t1=a*60+b;
    int t2=c*60+d;
    int T=t2-t1;
    int hh=T/60;
    int mm=T%60;
    printf("%d %d",hh,mm);
    return 0;
}