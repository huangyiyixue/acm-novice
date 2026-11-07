#include<stdio.h>
int main()
{
    int x;
    int A,Uim,B,ZM;
    scanf("%d",&x);
    int flag1=x%2==0;
    int flag2=x>4&&x<=12;
    if (flag1&&flag2)
    {
        A=Uim=1;
        B=ZM=0;
    }
    else if (!flag1&&!flag2)
    {
        ZM=1;
        A=Uim=B=0;
    }
    else
    {
        B=Uim=1;
        A=ZM=0;
    }
    printf("%d %d %d %d",A,Uim,B,ZM);
    return 0;
}    
