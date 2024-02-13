#include<stdio.h>
int main()
{
    int a,m=1,n,b,x,y,i,j,r;
    printf("Enter the range :");
    scanf(" %d %d ",&a,&b);
    for(i=a;i<=b;i++)
    {
        m = m*i;
    }
    x=0;
    j=0;
    n=m;
    while(m != 0)
    {
        x = m % 10;
        if(x!=0)
        {
            break;
        }
        else
        {
            m = m/10;
            ++j;
        }
    }
    printf(" %d = %d * 10^%d ",n,m,j);
    return 0;
}