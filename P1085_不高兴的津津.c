#include<stdio.h>
int main()
{
    int arr1[7];
    int arr2[7];
    for (int i=0;i<7;i++)
    {
        scanf("%d %d",&arr1[i],&arr2[i]);
    }
    int sum,flag;
    for (int i=0;i<7;i++)
    {
        int temp=arr1[i]+arr2[i];
        if (i==0)
        {
            sum=arr1[0]+arr2[0];
        }
        else
        {
            if (temp>sum)
            {
                sum=temp;
                flag=i+1;
            }
        }
    }
    if (sum<=8)
    {
        printf("0");
    }
    else
    {
        printf("%d",flag);
    }
    return 0;
}