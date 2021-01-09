#include<stdio.h>
int isprime(long x)
{
    long i,j=0;
    for(i=3;i<x;i=i+2)
    {
        if (0 == x%i) j=i;
    }
    if (j==0)
        return 1 ;
    else
        return 0 ;
}
void main(void)
{
    long t,m=2,n=3,a;
    while(m<=10001)
    {
        t=isprime(n);
        if (t==1)
        {
            m=m+1;
            a=n;
            n=n+2;
        }
        else
            n=n+2;
    }
    printf("Solution : %d",a);
}
