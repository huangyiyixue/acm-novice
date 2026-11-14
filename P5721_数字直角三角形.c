#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for (int i=0;i<n;i++)
    {
        for (int j=1;j<=(n-i);j++)
        {
            count++;
            printf("%02d",count);
        }
        printf("\n");
    }
    return 0;
}