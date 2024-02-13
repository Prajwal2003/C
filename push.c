#include<stdio.h>
#define max 10
struct stack 
{
    int a[max];
    int t;
};
void push(struct stack *s,int n)
{   
    if( (s->t) < max-1 )
    {
    s->t++;
    s->a[s->t] = n;
    }
    else
    printf("Stack overflow");
}
int main()
{
    struct stack s;
    s.t = -1;
    int n;
    printf("Enter a element to be pushed in : ");
    scanf("%d",&n);
    push(&s,n);
    for(int i=0;i<=(s.t);i++)
    printf(" %d ",s.a[i]);
    return 0;
}