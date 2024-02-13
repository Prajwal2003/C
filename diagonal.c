#include<stdio.h>

void read(int *a,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",(a+i)+j);
    }
    }
}
void display(int *a,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    printf(" %d ",*(a+i)+j);
    }
    printf("\n");
    }
}
void pri(int *a,int m,int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    if(i==j)
    {
        s = s + (*(a+i)+j);
    }
    }
    }
    printf("Sum of primary diagonal = %d \n",s);
}
void sec(int *a,int m,int n)
{
    int i,j,ps=0;
    for(i=m-1;i>=0;i--)
    {
    for(j=n-1;j>=0;j--)
    {
    if((i+j)==(n-1))
    {
        ps = ps + (*(a+i)+j);
    }
    }
    }
    printf("Sum of secondary diagonal = %d",ps);
}
int main()
{
    int a[20],b[20],i,j,m,n;
    printf("Enter m and n ");
    scanf("%d%d",&m,&n);
    printf("Enter array \n");
    read(a,m,n);
    printf("Array = \n");
    display(a,m,n);
    pri(a,m,n);
    sec(a,m,n);
    return 0;
}