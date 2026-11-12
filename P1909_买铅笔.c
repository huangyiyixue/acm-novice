#include<stdio.h>
#include<math.h>
int main()
{
    long n;
    scanf("%ld",&n);
    long num[3];
    long prize[3];
    for (int i=0;i<3;i++)
    {
        scanf("%ld %ld",&num[i],&prize[i]);
    }
    long sum;
    int ok=1;
    for (int i=0;i<3;i++)
    {
        long temp=prize[i]*ceil(n*1.0/num[i]);
        if (i==0)
        {
            sum=prize[i]*ceil(n*1.0/num[i]);
        }
        else
        {
            if (temp<=sum)
            {
                sum=temp;
            }
        }
    }
    printf("%ld",sum);
    return 0;
}
    