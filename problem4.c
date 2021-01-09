#include<stdio.h>
void main(void)
{
    int b,i,j,k,l,tab[6];
    for(i=9;i>=0;i--)
    {
        tab[0]=i;
        tab[5]=i;
        for(j=9;j>=0;j--)
        {
            tab[1]=j;
            tab[4]=j;
            for(k=9;k>=0;k--)
            {
                tab[2]=k;
                tab[3]=k;
                b=tab[5]*100000 + tab[4]*10000 + tab[3]*1000 + tab[2]*100 + tab[1]*10 + tab[0];
                for(l=900;l<=999;l++)
                {
                    if (b%l==0 && b/l < 999)
                    {
                        break ;
                    }
                    break ;
                }
                break ;
            }
            break ;
        }
        break ;
    }
    printf("Solution : %d",b);
}
