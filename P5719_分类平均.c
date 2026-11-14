#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int count1=0;
    int count2=0;
    double sum1=0;
    double sum2=0;
    double avg1,avg2;
    int count=0;
    for (int i=1;i<=n;i++)
    {
        if (i%k==0)
        {
            count1++;
            sum1=sum1+i;
            avg1=sum1/count1;
        }
        else
        {
            count2++;
            sum2=sum2+i;
            avg2=sum2/count2;
        }
    }
    if (count1!=0&&count2!=0)
    {
        printf("%.1f %.1f",avg1,avg2);
    }
    else if (count1==0)
    {
         printf("0.0 %.1f",avg2);
    }
    else
    {
         printf("%.1f 0.0",avg1);
    }
    return 0;
}