//你是难道在对题目的理解不透
//如此题，可持续，即每年新增的等于消耗的，不动老本

#include<stdio.h>
int main()
{
    int x,a,y,b;
    scanf("%d %d %d %d",&x,&a,&y,&b);
    float z=1.0*(a*x-b*y)/(a-b);
    printf("%.2f\n",z);
    return 0;
}