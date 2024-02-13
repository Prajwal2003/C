#include<stdio.h>

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
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            k++;
        }
      if(k>1)
        printf("Frequency of %d = %d",a[i],k);
    }
    for(i=0;i<n;i++)
    {
    }
    return 0;
}