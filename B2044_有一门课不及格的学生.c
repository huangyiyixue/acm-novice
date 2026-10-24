#include<stdio.h>
int main()
{
    int arr[3];
    for (int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    } 
    int count=0;
    for (int i=0;i<3;i++)
    {
        if(arr[i]<60)
        {
            count++;
        }
    } 
    if (count==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}