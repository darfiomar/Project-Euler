#include<stdio.h>
int fib(int n)
{
  if (n <= 2)
    return n;
  else
    return fib(n-1) + fib(n-2);
}

void main(void)
{
    int i=1,sum=0;
    while (fib(i)<4000000)
    {
        if (fib(i)%2==0)
            {
            sum = sum + fib(i) ;
            i=i+1;
            }
        else
            i=i+1;
    }
    printf("Solution : %d",sum);
}
