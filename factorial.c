#include<stdio.h>
int factorial(int );
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  int result=factorial(n);
  printf("the factorial of %d is %d",n,result);
  return 0;
}
int factorial(int n)
{
  if(n==1)
  return 1;
  else
  return n*factorial(n-1);
}  
