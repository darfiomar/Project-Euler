#include <iostream>
#include <cmath>
using namespace std ;
int isprime(__int64 x);
int main()
{
    __int64 s=0;
    for(__int64 a=3 ; a<2000000 ; a+=2)
    {
        if(isprime(a)==1) s+=a;
    }
    s+=2;
    cout << "Solution: \a" << s << endl;
    return 0;
}
int isprime(__int64 x)
{
    __int64 i,b,j=0;
    for(int i=3;i<x;i+=2)
    {
        if (x%i == 0)
        {
            j=i;
            break;
        }
    }
    if (j==0) return 1 ;
    else return 0 ;
}
