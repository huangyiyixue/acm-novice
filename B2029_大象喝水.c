#include<stdio.h>
#include<math.h>
int main()
{
    int h,r;
    scanf("%d %d",&h,&r);
    int num=(int)ceil(20000.0/(3.14*r*r*h));
    printf("%d",num);
    return 0;
}