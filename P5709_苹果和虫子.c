#include<stdio.h>
#include<math.h>
int main()
{
    int m,t,s,res;
    scanf("%d %d %d",&m,&t,&s);
    float eat=s*1.0/t;
    if (t>0)
    {
        if (m>eat)
        {
            res=m-ceil(eat);
        }
        else
        {
            res=0;
        }
    }
    else
    {
        res=0;
    }
    printf("%d",res);
    return 0;
   
}