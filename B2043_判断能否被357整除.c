/*
    1.先准备一个标记变量，记录一共找到了多少个可以整除的数
    2.遍历3 5 7，能整除flag+1
    3.如果flag==0,输出n
*/

/*
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int OK=0;
    for (int i=1;i<=3;i++)
    {
        int j=2*i+1;
        if (x%j==0)
        {
            printf("%d ",j);
            OK=1;
        }
    }
    if (OK==0)
    {
        printf("n");
    }
    return 0;
}
*/

//改进：利用数组，会使代码更优美
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int flag=0;
    int arr[]={3,5,7};
    for (int i=0;i<3;i++)
    {
        if (x%arr[i]==0)
        {
            //flag为1，条件成立，执行。
            //即一旦有了第一个能整除的数，就会输出空格
            if (flag)
            {
                printf(" ");
            }
            printf("%d",arr[i]);
            flag=1;
        }
    }
    //目的：希望flag为0时执行此段代码，即flag取反时为1，成立→执行
    if (!flag)
    {
        printf("n");
    }
    return 0;
}