#include<stdio.h>
void main(void)
{
    long long a,b,c,p;
    for(a=1;a<1000;a++)
    {
        for(b=1;b<1000;b++)
        {
            for(c=1;c<1000;c++)
            {
                if(a*a+b*b==c*c && a+b+c==1000)
                {
                    p=a*b*c ;
                    break;
                }
            }
        }
    }
    printf("Solution : %d",p);
}
