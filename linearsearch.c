#include <stdio.h>
void read(int a[],int n)
{
  int c;
 printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);
}
void display(int a[],int n)
{
  printf("ARRAY =");
  for (c = 0; c < n; c++)
    printf("%d", &a[c]);
}
void compute(int a[],int n)
{
  int search,c;
printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (a[c] == search)
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);
}
int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  read(a,n);
  display(a,n);
  compute(a,n);
  return 0;
}