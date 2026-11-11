#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int min=a;
    if (b<=min)
    {
        min=b;
    }
    if (c<=min)
    {
        min=c;
    }
    int max=a;
    if (b>=max)
    {
        max=b;
    }
    if (c>=max)
    {
        max=c;
    }
    int mid=a+b+c-min-max;
    if (max>=min+mid)
    {
        printf("Not triangle");
    }
    else
    {
        if (min*min+mid*mid==max*max)
        {
            printf("Right triangle\n");
            if (min==mid)
            {
                printf("Isosceles triangle\n");
            }
        }
        else if (min*min+mid*mid>max*max)
        {
            printf("Acute triangle\n");
            if (min==mid||mid==max)
            {
                printf("Isosceles triangle\n");
            }
            if (a==b&&a==c)
            {
                printf("Equilateral triangle\n");
            }
        }
        else
        {
            printf("Obtuse triangle\n");
            if (min==mid)
            {
                printf("Isosceles triangle\n");
            }
        }
    }
    return 0;
}