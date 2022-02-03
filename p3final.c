#include<stdio.h>
int input_n()
{
  int n;
  printf("To find sum of first n numbers\n");
  printf("Enter value of n\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=0;i<=n;i++)
  sum = sum + i;
  return sum;
}
void output(int n,int sum)
{
  printf("sum of first %d numbers is\t",n);
  int i;
  for(i=1;i<n;i++)
  printf("%d+\t",i);
  printf("%d\t",n);
  printf("= %d\n",sum);
}
int main()
{
  int i,n,sum;
  n = input_n();
  sum = sum_n(n);
  output(n,sum);
  return 0;
}