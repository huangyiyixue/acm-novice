#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float money=a+0.1*b;
    int num=(int)floor(money/1.9);
    printf("%d",num);
    return 0;
}