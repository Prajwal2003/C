#include<stdio.h>
#define max 10
struct stack 
{
    int a[max];
    int t;
};
void pop(struct stack *s)
{   
    int n;
    if( (s->t) >= 0 )
    {
    n = s->a[s->t];
    (s->t)--;
    printf("%d is removed",n);
    }
    else
    printf("Stack underflow");
}
int main()
{
    struct stack s;
    s.t = -1;
    pop(&s);
    return 0;
}