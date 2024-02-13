#include<stdio.h>
struct student
{
    char name[100];
    int sem;
    float cgpa;
};
int main()
{
    struct student s[100];
    int n,i,x;
    float l;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name of student %d \n",i+1);
        scanf("%s",s[i].name);
        printf("Enter sem of student %d \n",i+1);
        scanf("%d",&s[i].sem);
        printf("Enter cgpa of student %d \n",i+1);
        scanf("%f",&s[i].cgpa);
    }
    l=s[0].cgpa;
    for(i=0;i<n;i++)
    {
        if(s[i].cgpa > l)
        { 
        l = s[i].cgpa;
        x=i;
        }
    }
    printf("details of student with highest cgpa :\n");
    printf("Enter name of student = %s \n",s[x].name);
    printf("Enter sem of student = %d \n",s[x].sem);
    printf("Enter cgpa of student = %f \n",s[x].cgpa);
    return 0;
}