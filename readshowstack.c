#include<stdio.h>
#define max 5
struct stack 
{
    int a[max];
    int t;
};
void add(struct stack *s)
{   
    for(int i=0;i<=(s->t);i++)
    {
    scanf(" %d ", s->a[i] );
    s->t++;
    }
}
void display(struct stack *s)
{
    for(int i=s->t;i>=0;i--)
    {
    printf(" %d ",(s->a[i]));
    }    
}
int main()
{
    struct stack s;
    s.t = -1;
    add(&s);
    display(&s);
    return 0;
}