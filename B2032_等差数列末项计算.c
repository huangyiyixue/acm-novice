#include<stdio.h>
int main()
{
    int a1,a2,n,An;
    scanf("%d %d %d",&a1,&a2,&n);
    An=a1+(n-1)*(a2-a1);
    printf("%d",An);
    return 0;

}