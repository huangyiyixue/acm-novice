#include<stdio.h>
int main()
{
    int candy[5];
    int eat=0;
    for (int i=0;i<5;i++)
    {
        scanf("%d",&candy[i]);
    }
    for (int i=0;i<5;i++)
    {
        int avg=candy[i]/3;
        eat=eat+candy[i]%3;
        candy[i]=avg;
        if (i==0)
        {
            candy[4]+=avg;
            candy[1]+=avg;
        }
        else if (i==4)
        {
            candy[3]+=avg;
            candy[0]+=avg;
        }
        else
        {
            candy[i-1]+=avg;
            candy[i+1]+=avg;
        }
    }
    for (int i=0;i<5;i++)
    {
        if (i==4)
        {
            printf("%d\n",candy[i]);
            break;
        }
        printf("%d ",candy[i]);
    }
    printf("%d\n",eat);
    return 0;
}