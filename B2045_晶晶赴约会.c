#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int arr[]={1,3,5};
    int count=0;
    for (int i=0;i<3;i++)
    {
        if (t==arr[i])
        {
            printf("NO");
            count++;
            break;
        }
    }
    if (!count)
    {
        printf("YES");
    }
    return 0;
}