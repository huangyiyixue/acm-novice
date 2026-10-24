#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    float t1=d/1.2;
    float t2=27.0+23+d/3.0;
    if (t1>t2)
    {
        printf("Bike");
    }
    else if (t1<t2)
    {
        printf("Walk");
    }
    else
    {
        printf("All");
    }
    return 0;
}