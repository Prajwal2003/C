#include <stdio.h>

int main() 
{
    int a[10],b[10],i,j,k,n;
    printf("Enter n = ");
    scanf("%d",&n);
    printf("Enter array = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        b[i]=b[i]+1;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>1)
        printf("Frequency of %d = %d",a[i],b[i]);
    
    }
    return 0;
}