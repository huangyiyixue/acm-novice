#include<stdio.h>
#include<math.h>
int main()
{
    int s,v;
    scanf("%d %d",&s,&v);
    //分钟数
    int t0=ceil(1.0*s/v+10);
    //难点在于时间的表示，时 分的转化
    //那就不直接求时 分，先获取总分钟数，同时注意提前一天出门的情形
    int t1=480-t0;
    int T;
    if (t1>=0) 
    {
        T=t1;
    }
    else
    {
        T=1440+t1;
    }
    int hh=T/60;
    int mm=T%60;
    printf("%02d:%02d\n",hh,mm);
    return 0;
}