#include<stdio.h>
void main(void)
{
    long i,j,s=0,a=0,b;
    for(i=1;i<=100;i++)
    {
        a=a + i*i;
    }
    for(j=1;j<=100;j++)
    {
        s=s + j;
    }
    b=s*s;
    printf("Solution : %d",b-a);
}
