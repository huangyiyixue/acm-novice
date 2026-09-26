#include<stdio.h>
int main()
{
    int num,death;
    scanf("%d",&num);
    scanf("%d",&death);
    printf("%.3f%%",(double)death/num*100);
    return 0;
}