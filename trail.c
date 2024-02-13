//create student struct; name sem cgpa as struct members;input n=no of students;input n no of name ,sem ,cgpa;print highest cgps student details//
#include<stdio.h>
struct student
{
    char name[100];
    int sem;
    float cpga;
};
void read(struct student s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter name of student %d ",i+1);
        scanf("%s",s[i].name);
        printf("Enter sem of student %d ",i+1);
        scanf("%d",&s[i].sem);
        printf("Enter cgpa of student %d ",i+1);
        scanf("%f",&s[i].cgpa);
    }
}
void display(struct student s,int n)
{
    int i,x;
    float l;
    l= *s[0].cgpa;
    for(i=0;i<n;i++)
    {
        if( *s[i].cgpa > l)
        { 
        l = *s[i].cgpa;
        x=i;
        }
    }
    printf("details of student with highest cgpa :");
    printf("Enter name of student = %s",*s[x].name);
    printf("Enter sem of student = %d",*s[x].sem);
    printf("Enter cgpa of student = %f",*s[x].cgpa);
}
int main()
{
    struct student s[100];
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    read(s,n);
    display(s,n);
    return 0;
}