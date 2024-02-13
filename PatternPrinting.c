#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k,x;
    scanf("%d", &n);
    {
        k=1;
        for(i=0;i<=n*2-2 ;i++)
        { 
            x=1;
            for(j=0;j<=n*2-2;j++)
            {   
                if(i== 0 || i== n*2-2 || j== n*2-2 || j==0 )
                    printf("%d ",1);
                else 
                    if(n-x > n-k)
                        printf("%d ",x); 
                    else
                        printf("%d ",k);
    
                if(j<n-1)
                    x++;
                else
                    x--;
            }
            printf("\n");
            if(i<n-1  )
                k++;
            else
                k--;
        }
    }
    return 0;
}
